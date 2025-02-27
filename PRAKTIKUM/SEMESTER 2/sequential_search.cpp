#include <iostream>

using namespace std;

// Deklarasi array dan ukuran array
int arr[] = {22, 56, 64, 99, 101, 200, 32, 17};
int N = sizeof(arr) / sizeof(arr[0]); // Menghitung jumlah elemen dalam array

int tanpa_sentinel() {
    int cari;
    cout << "Masukkan nilai yang dicari: ";
    cin >> cari; 

    int index_hasil = -1; // Inisialisasi dengan -1 untuk menandakan jika nilai tidak ditemukan

    // Algoritma Sequential Search (tanpa sentinel)
    for (int i = 0; i < N; i++) {
        if (arr[i] == cari) {
            index_hasil = i;
            break; // Hentikan pencarian jika nilai ditemukan
        }
    }

    // Output hasil pencarian
    if (index_hasil != -1) {
        cout << "Nilai ditemukan pada indeks ke-" << index_hasil << endl;
    } else {
        cout << "Nilai tidak ditemukan." << endl;
    }

    return 0;
}


int dengan_sentinel() {
    const int N = 10;
    int arr[N] = {22, 56, 64, 99, 101, 200, 32, 17, 85}; // Array dengan elemen tetap
    int cari;

    // Input nilai yang ingin dicari
    cout << "Masukkan nilai yang dicari: ";
    cin >> cari;

    // Menyimpan nilai pencarian sebagai sentinel
    arr[N - 1] = cari;

    // Sequential search dengan sentinel
    int i = 0;
    while (arr[i] != cari) {
        i++;
    }

    // Menentukan hasil pencarian
    if (i < N - 1) {
        cout << "Elemen ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << "Elemen tidak ditemukan." << endl;
    }

    return 0;
}

int main(){
    cout<<"MENU SEARCH SEQUENTIAL"<<endl;
    char ulang='t';int menu;

    do{
        system("cls");
        cout<<"1. Tanpa Sentinel"<<endl;
        cout<<"2. Dengan Sentinel"<<endl;
        cout<<"pilih : ";cin>>menu;
        if(menu==1){
            tanpa_sentinel();
        } else 
            dengan_sentinel();
        cout<<"Ulang? (y/t) : ";cin>>ulang;
    }while(ulang!='t');
}

