#include <iostream>
using namespace std;

int b=0;
string dataString[100][2];

void tambahkan(){
  string input;

    cout<<"\n====Tambah Barang====\n";
    cout<<"=====================\n";
    cout<<"Masukkan Nama Barang : ";
    cin.ignore();getline(cin,input);
    dataString[b][0]= input;
    cout<<"Masukkan Stok Barang : ";
    getline(cin,input);
    dataString[b][1]= input;

    b++;
    cout<<"=========================================\n";
    cout<<"BARANG BERHASIL DITAMBAHKAN KE INVENTARIS\n";
    cout<<"=========================================\n";
}

void tampilkan(){
   if(b==0){
    cout<<"Inventaris Kosong\n";
    return;
    }
   
   cout<<"=========DAFTAR BARANG INVENTARIS=========\n";
    for(int i = 0; i < b; i++){
        cout<< i+1 << ". ";
        cout<<"Nama Barang :"<< dataString[i][0] << endl;
        cout<<"Stok Barang :"<< dataString[i][1] << endl;
        cout<<endl;
    }
   
}

void perbarui(){
    char pilih;
    string cari;
    cout<<"cari barang apa? : ";cin.ignore();getline(cin,cari);
    for(int i=0;i<b;i++){
        if(cari==dataString[i][0]){
            cout<<"Barang ditemukan !"<<endl;
            cout<<"Perbarui Barang ini? (y/t) : ";cin>>pilih;
            if(pilih!='t'){
                cout<<"Masukkan nama yang baru : ";cin.ignore();getline(cin,cari);
                dataString[i][0]=cari;
                cout<<"Masukkan stok yang baru : ";getline(cin,cari);
                dataString[i][1]=cari;
            }else break;
        }
        break;
    }
}

int main() {

   char ulang;
   int menu;

    do {
        system("cls");
        cout<<"\n========== INVENTARIS HIMATIF==========\n";
        cout<<"\n=======================================\n";
        cout<<"1.Tambahkan Barang\n";
        cout<<"2.Tampilkan Inventaris\n";
        cout<<"3.Perbarui Stok\n";
        cout<<"4.Keluar\n";
        cout<<"\n=======================================\n";
        cout<<"Pilih Menu :";
        cin>>menu;

        switch(menu){
            system("cls");
            case 1:
            tambahkan();
            break;

            case 2:
            tampilkan();
            break;

            case 3:
            perbarui();
            break;

            case 4: 
            cout<<"Anda Telah Keluar!!!\n";
            break;

            default:
            cout<<"MENU YNG ANDA MASUKKAN TIDAK VALID\n";
        }
        if(menu==4) break;
        cout<<"Apakah Anda Ingin Kembali Ke Menu ? (y/t): ";
        cin>>ulang;

    }while(ulang!='t');

    return 0;
}



