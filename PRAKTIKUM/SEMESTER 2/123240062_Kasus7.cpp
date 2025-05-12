#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <limits>
#include <chrono>
#include <thread>
#include <random>

#define MAX_STUDENT 100
#define MAX_NAME_CHAR 30

using namespace std;

struct mhs{
    string nama;
    float nilai;
};

mhs Data[MAX_STUDENT];
float   min_nilai = 0.0f, 
        max_nilai = 10.0f;
  
void swapMhs(mhs* a, mhs* b) {
    mhs temp = *a;
    *a = *b;
    *b = temp;
}

void tampilkan_data(int N) {
    cout <<endl << left << setw(5) << "No"
         << setw(35) << "Nama"
         << setw(10) << "Nilai" << endl;
    cout << string(50, '-') << endl;

    for (int i = 0; i < N; i++) {
        cout << left << setw(5) << i + 1
             << setw(35) << Data[i].nama
             << setw(10) << fixed << setprecision(2) << Data[i].nilai << endl;
    }
}

int partition(mhs arr[], int low, int high, int menu) {
    float pivot = arr[high].nilai;
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        bool condition = (menu == 1) ? (arr[j].nilai >= pivot) // Desc
                                     : (arr[j].nilai <= pivot); // Asc         
        if (condition) {
            i++;
            swapMhs(&arr[i], &arr[j]);
        }
    }
    swapMhs(&arr[i+1], &arr[high]);
    return (i + 1);
}

void quickSort(mhs arr[], int low, int high, int menu) {
    if (low < high) {
        int pi = partition(arr, low, high, menu);
        quickSort(arr, low, pi - 1,menu);
        quickSort(arr, pi + 1, high,menu);
    }
}

void sort_by_value(int menu, int N) {
    quickSort(Data, 0, N - 1, menu);
    tampilkan_data(N);
}

//bubblesort
void sort_by_name(int menu, int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if ((menu == 0 && (Data[j].nama > Data[j + 1].nama)) || 
                (menu == 1 && (Data[j].nama < Data[j + 1].nama))) {
                swapMhs(&Data[j], &Data[j + 1]);
            }
        }
    }
    tampilkan_data(N);
}

void pause(){
    cin.ignore();
    cout<<endl<<"TEKAN ENTER UNTUK MELANJUTKAN";
    cin.get();
}

int generateRandomInt(int min, int max) {
    random_device rd;               // Non-deterministic random number generator
    mt19937 gen(rd());              // Mersenne Twister engine seeded with rd
    uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

string generateRandomString(size_t length) {
    const string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, chars.size() - 1);

    string result;
    for (size_t i = 0; i < length; ++i) {
        result += chars[distrib(gen)];
    }
    return result;
}

float generateRandomFloat(float min = 0.0f, float max = 100.0f) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> distrib(min, max);
    return distrib(gen);
}

void input_data(int& size) {
    int qty;
    char rand;
    system("cls");
    cout << "+================================+" << endl;
    cout << "| [1] Input Data Mahasiswa       |" << endl;
    cout << "+================================+" << endl;
    cout << "Mau masukkan berapa data? : "; cin >> qty;
    cout << "Random Data? (y/n) : "; cin >> rand;

    if (size + qty > MAX_STUDENT) {
        cout << "Data melebihi kapasitas maksimum!" << endl;
        size = 0; // overwrite
        return;
    }

    for (int i = size; i < qty + size; i++) {
        if (rand == 'y') {
            Data[i].nama = generateRandomString(generateRandomInt(4, 10));
            Data[i].nilai = generateRandomFloat(min_nilai, max_nilai);
        } else {
            cin.ignore();
            mhs* ptr = &Data[i];
            cout << "[" << i + 1 << "]Masukkan Nama  : ";
            getline(cin, ptr->nama);
            if (ptr->nama.length() > MAX_NAME_CHAR) {
                ptr->nama = ptr->nama.substr(0, MAX_NAME_CHAR);
            }
            cout << "   Masukkan Nilai : ";
            cin >> ptr->nilai;
            cout << string(40, '-') << endl;
            if (ptr->nilai < min_nilai || ptr->nilai > max_nilai) {
                i--; cout << "invalid value (min or max)" << endl;
            }
        }
    }
    size += qty;
    cout << "Data telah masuk!" << endl;
    pause();
}

void menu_tampilkan_data(int size) {
    char ulang;
    do {
        system("cls");
        int sortMenu;
        if (size != 0) {
            cout << "+================================+" << endl;
            cout << "| [2] Tampilkan Data Mahasiswa   |" << endl;
            cout << "+================================+" << endl;

            sort_by_value(1, size); // default desc

            cout << endl << "== Sorting Lain ==" << endl;
            cout << "1. Nilai Ascending" << endl;
            cout << "2. Nama Ascending (A-Z)" << endl;
            cout << "3. Nama Descending (Z-A)" << endl;
            cout << "4. Kembali" << endl;
            cout << "Pilih : "; cin >> sortMenu;

            auto start = chrono::high_resolution_clock::now();
            this_thread::sleep_for(chrono::seconds(0));

            if (sortMenu == 1) sort_by_value(0, size);
            else if (sortMenu == 2 || sortMenu == 3) sort_by_name(sortMenu - 2, size);
            else if (sortMenu == 4) return;
            else cout << "Pilihan tidak valid!" << endl;

            auto end = chrono::high_resolution_clock::now();
            auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
            
            cout << endl << "Elapsed time: " << duration.count() << " ms" << endl;
            cout << endl << "Ulangi menu (y/n) : "; cin >> ulang;
        } else {
            cout << "Kosong! mohon isi data terlebih dahulu" << endl;
            pause();
            break;
        }
    } while (ulang != 'n');
}

int main() {
    int size = 0;
    char ulang = 'n';
    do {
        system("cls");
        char menu;
        cout << "+================================+" << endl;
        cout << "|       MENU DATA MAHASISWA      |" << endl;
        cout << "+================================+" << endl;
        cout << "| [1] Input Data Mahasiswa       |" << endl;
        cout << "| [2] Tampilkan Data Mahasiswa   |" << endl;
        cout << "| [3] Keluar                     |" << endl;
        cout << "+================================+" << endl;
        cout << "Pilih : "; cin >> menu;

        switch (menu) {
            case '1': input_data(size); break;
            case '2': menu_tampilkan_data(size); break;
        }

        if (menu == '3') {
            cout << "Yakin ingin keluar? (y/n) : "; cin >> ulang;
            if (ulang == 'y')
                cout << endl << "T E R I M A K A S I H" << endl;
        }

    } while (ulang != 'y');
    return 0;
}