#include <iostream>
using namespace std;

struct Mahasiswa {
    int nim;
    string nama,prog_studi;
};

Mahasiswa mhs[6]= {
    {108, "Gradiva Arya", "Informatika"},
    {111, "Nur Heri Budianto","Teknik Industri"},
    {122, "Bahlul Lala", "Tambang"},
    {314, "Budi Budi Budi", "Sistem Informasi"},
    {422, "Wijdan","Informatika"}
};

int N=sizeof(mhs)/sizeof(mhs[0]);

int search_nama(string nama){
    for(int i=0;i<N-1;i++){
        if(nama==mhs[i].nama){
            cout<<"Ditemukan! Mahasiswa dengan NIM : "<<mhs[i].nim<<endl;
            return 0;
        }
    }
    return -1;
}

int search_nim(int nim){
    mhs[N-1].nim=nim; //sentinel
    int i=0;
    while(mhs[i].nim!=nim) i++;
    if(i<(N-1)) {cout<<"Ditemukan! Mahasiswa dengan nama : "<<mhs[i].nama<<endl;return 0;}
    else return -1;
}

int search_prodi(string prog_studi){
    int count=0;
    for(int i=0;i<N-1;i++){
        if(prog_studi==mhs[i].prog_studi){
            cout<<"Ditemukan! Mahasiswa dengan nama : "<<mhs[i].nama<<endl;
            count++;
        }
    }
    if(count==0) return -1;
    else return 0;
}

int main(){
    char ulang='t';
    do{
        char menu;
        system("cls");
        cout<<"===SI MAHASISWA==="<<endl;
        cout<<"1. Cari Berdasarkan Nama"<<endl;
        cout<<"2. Cari Berdasarkan NIM"<<endl;
        cout<<"3. Cari Berdasarkan Program Studi (semua)"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"pilih : ";cin>>menu;
        if(menu=='1'){
            string nama;
            cout<<"==Cari Berdasarkan Nama=="<<endl;
            cout<<"Masukkan Nama: ";cin.ignore();getline(cin,nama);
            if(search_nama(nama)==-1) cout<<"Data tidak ditemukan!"<<endl;
            system("pause");
        }else if(menu=='2'){
            int nim;
            cout<<"===Cari Dengan NIM==="<<endl;
            cout<<"Masukkan NIM : ";cin>>nim;
            if(search_nim(nim)==-1) cout<<"Data tidak ditemukan!"<<endl;
            system("pause");
        }else if(menu=='3'){
            string prog_studi;
            cout<<"===Cari dengan program studi==="<<endl;
            cout<<"Masukkan program studi: ";cin.ignore();getline(cin,prog_studi);
            if(search_prodi(prog_studi)==-1) cout<<"Data tidak ditemukan!"<<endl; 
            system("pause");
        }else if(menu=='0'){
            cout<<"yakin ingin keluar? (y/t) : ";cin>>ulang;    
        }
    }while(ulang!='y');
}