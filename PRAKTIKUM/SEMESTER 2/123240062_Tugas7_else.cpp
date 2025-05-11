#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <limits>
#include <chrono>
#include <thread>

#define MAX_STUDENT 100
#define MAX_NAME_CHAR 30

using namespace std;

struct mhs{
    char nama[MAX_NAME_CHAR];
    float nilai;
};

mhs Data[MAX_STUDENT];
  
void swapMhs(mhs* a, mhs* b) {
    mhs temp = *a;
    *a = *b;
    *b = temp;
}

void tampilkan_data(int N) {
    cout <<endl << left << setw(5) << "No"
         << setw(30) << "Nama"
         << setw(10) << "Nilai" << endl;
    cout << string(45, '-') << endl;

    for (int i = 0; i < N; i++) {
        cout << left << setw(5) << i + 1
             << setw(30) << Data[i].nama
             << setw(10) << fixed << setprecision(2) << Data[i].nilai << endl;
    }
}


int partition(mhs arr[], int low, int high, int menu) {
    float pivot = arr[high].nilai;
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j].nilai <= pivot && menu==0) { //asc
            i++;
            swapMhs(&arr[i], &arr[j]);
        }
        else if (arr[j].nilai > pivot && menu==1) { //desc
            i++;
            swapMhs(&arr[i], &arr[j]);
        }
    }
    swapMhs(&arr[i+1], &arr[high]);
    return (i + 1);
}

void quickSort(mhs arr[], int low, int high,int menu) {
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
            if ((menu == 0 && strcmp(Data[j].nama, Data[j + 1].nama) > 0) || 
                (menu == 1 && strcmp(Data[j].nama, Data[j + 1].nama) < 0)) {
                swapMhs(&Data[j], &Data[j + 1]);
            }
        }
    }
    tampilkan_data(N);
}

void pause(){
    cin.ignore();
    cout<<endl<<"TEKAN ENTER UNTUK MELANJUTKAN"<<endl;
    cin.get();
}

int main(){
    char ulang='n';
    int size=0;
    
    do{
        system("cls");
        char menu;
        cout<<"+================================+"<<endl;
        cout<<"|       MENU DATA MAHASISWA      |"<<endl;
        cout<<"+================================+"<<endl;
        cout<<"| [1] Input Data Mahasiswa       |"<<endl;
        cout<<"| [2] Tampilkan Data Mahasiswa   |"<<endl;
        cout<<"| [3] Keluar                     |"<<endl;
        cout<<"+================================+"<<endl;
        cout<<"Pilih : "; cin>>menu;

        switch(menu){
            case '1' :
                int qty;
                system("cls");
                cout<<"+================================+"<<endl;
                cout<<"| [1] Input Data Mahasiswa       |"<<endl;
                cout<<"+================================+"<<endl;
                cout<<"Mau masukkan berapa data? : ";cin>>qty;
                if (size + qty > MAX_STUDENT) {
                    cout << "Data melebihi kapasitas maksimum!" << endl;
                    break;
                }
                for(int i=size;i<qty+size;i++){
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    mhs* ptr = &Data[i];
                    cout << "Masukkan Nama  : ";
                    cin.getline(ptr->nama, MAX_NAME_CHAR + 1);
                    cout << "Masukkan Nilai : ";
                    cin >> ptr->nilai;
                    cout<<"------------------------------"<<endl;
                }
                size+=qty;
                cout<<"Data telah masuk!"<<endl;
                pause();
                break;
                case '2' :
                do{
                    system("cls");
                    int sortMenu;
                    if(size!=0){
                        cout<<"+================================+"<<endl;
                        cout<<"| [2] Tampilkan Data Mahasiswa   |"<<endl;
                        cout<<"+================================+"<<endl;

                        sort_by_value(1,size); //desc - default

                        cout << endl << "== Sorting Lain ==" << endl;
                        cout << "1. Nilai Ascending" << endl;
                        cout << "2. Nama Ascending (A-Z)" << endl;
                        cout << "3. Nama Descending (Z-A)" << endl;
                        cout << "4. Kembali" << endl;
                        cout << "Pilih : "; cin>>sortMenu;

                        // Record the starting time point
                        auto start = chrono::high_resolution_clock::now();
                        // Code block to measure execution time
                        this_thread::sleep_for(chrono::seconds(0));

                        if (sortMenu == 1) {
                            sort_by_value(0, size);
                        } else if (sortMenu == 2 || sortMenu == 3) {
                            sort_by_name(sortMenu - 2, size);
                        } else if(sortMenu==4) {
                            cout<<" "<<endl;
                        }else {
                            cout << "Pilihan tidak valid!" << endl;
                        }
                        
                         // Record the ending time point
                         auto end = chrono::high_resolution_clock::now();
                         // Calculate the duration
                         auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
                         // Output the elapsed time
                         cout <<endl << "Elapsed time: " << duration.count() << " ms" << std::endl;
                        
                    }else {cout<<"Kosong! mohon isi data terlebih dahulu"<<endl;
                        pause();
                        break;
                    }
                    cout<<endl<<"Ulangi menu (y/n) : ";cin>>ulang;
                }while(ulang!='n');
                break;
            }
        ulang='n';//def 
        if(menu=='3'){
            cout<<"Yakin ingin keluar? (y/n) : ";cin>>ulang;
            if(ulang=='y')
                cout<<endl<<"T E R I M A K A S I H"<<endl<<" ";
        }
    }while(ulang!='y');

    return 0;
}