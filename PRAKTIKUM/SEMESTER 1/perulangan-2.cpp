#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    // int jumlahSiswa;
    // float nilaiSiswa,totalNilai=0,rataRata;

    // cout<<"Masukkan Jumlah siswa : ";cin>>jumlahSiswa;
    // system("cls");
    // for(int i=1;i<=jumlahSiswa;i++){
    //     cout<<"Masukkan Nilai Siswa ke - "<<i<<" : ";cin>>nilaiSiswa;
    //     totalNilai += nilaiSiswa;
    // }

    // rataRata=totalNilai/jumlahSiswa;
    // cout<<"Total Nilai : "<<totalNilai<<endl;
    // cout<<"Rata-rata Nilai : "<<rataRata<<endl;
    
    int pilih,angka,counter=0;
    char yn;
    bool lanjut;
    do{
        system("cls");
        cout<<"Menu"<<endl;
        cout<<"1. Deret Biasa"<<endl;
        cout<<"2. Deret Penjumlahan"<<endl;
        cout<<"3. Menu Bintang"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"Masukkan Pilihan Menu: ";cin>>pilih;
        switch(pilih){
        case 1:
        cout<<"Deret Biasa"<<endl;
        cout<<"Masukkan Angka Maksimal : ";cin>>angka;
        for(int i=1;i<=angka;i++){
            cout<<i<<" ";
        }
        break;
        case 2:
        cout<<"Deret Penjumlahan"<<endl;
        cout<<"Masukkan Angka Maksimal: ";cin>>angka;
        for(int i=1;i<=angka;i++){
            cout<<i<<" + ";
            counter+=i;
        }
        cout<<" = "<<counter;
        break;
        case 3:
        cout<<"Menu Bintang"<<endl;
        cout<<"1. Bintang Horizontal"<<endl;
        cout<<"2. Bintang Vertikal"<<endl;
        cout<<"Pilih : ";cin>>angka;
        cout<<"Masukkan Berapa kali perulangan : ";cin>>counter;
        switch(angka){
            case 1:
            for(int i=1;i<=counter;i++){
                cout<<"* ";
            }
            break;
            case 2:
            for(int i=1;i<=counter;i++){
                cout<<"*"<<endl;
            }
            break;
        }break;
        case 4:
        cout<<"Menu exit";
        system("exit");
        break;
    }
    
    cout<<"\nApakah ingin diulang? (y/n) : ";cin>>yn;
    if(yn=='y'){
        lanjut=true;
        counter=0;
    }
    else {
        lanjut=false;
        system("exit");
        }
    }
    while(lanjut);
}