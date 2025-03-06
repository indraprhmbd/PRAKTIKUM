#include <iostream>
using namespace std;

struct Mahasiswa {
    int nim;
    string nama,prog_studi;
};

Mahasiswa mhs[5]= {
    {108, "Gradiva Arya", "Informatika"},
    {111, "Nur Heri Budianto","Teknik Industri"},
    {122, "Bahlul Lala", "Tambang"},
    {314, "Budi Budi Budi", "Sistem Informasi"},
    {422, "Wijdan","Informatika"}
};

int binary_search(int l, int r, int target) {
    if (l > r) return -1; // Basis rekursi, jika tidak ditemukan
    int mid = l + (r - l) / 2; // Hindari overflow dengan cara ini
    if (mhs[mid].nim == target) return mid; // Jika target ditemukan
    if (mhs[mid].nim > target) return binary_search(l, mid - 1, target); // Cari di kiri
    return binary_search(mid + 1, r, target); // Cari di kanan
}

void searching_nim(){
    int target;
    int size = sizeof(mhs)/sizeof(mhs[0]);
    cout<<"Cari berdasarkan NIM"<<endl;
    cout<<"Masukkan nim yang ingin dicari : ";cin>>target;
    int result = binary_search(0, size - 1, target);
    if (result != -1) cout << "Ditemukan! Mahasiswa bernama : " << mhs[result].nama << endl <<"Program Studi : "<<mhs[result].prog_studi<<endl;
    else cout << "Data tidak ditemukan!" << endl;
    system("pause");
}

int main(){
    char ulang='t';
    do{
        char menu;
        system("cls");
        cout<<"===SI MAHASISWA==="<<endl;
        cout<<"1. Cari Berdasarkan NIM"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"pilih : ";cin>>menu;
        if(menu=='1') searching_nim();
        if(menu=='0'){
            cout<<"yakin ingin keluar? (y/t) : ";cin>>ulang;    
        }
    }while(ulang!='y');
}