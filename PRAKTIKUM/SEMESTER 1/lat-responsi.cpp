#include <iostream>
#include <iomanip>
using namespace std;
bool login(bool verify);
void tambahBuku(),daftarBuku(),cariBuku(),hapusBuku(),urutkanBuku(int menu);

int a=0;
string judulBuku[100], pengarangBuku[100];int tahunBuku[100];

int main(){
    bool verify=false;
    int menu;
    verify = login(verify);
    if(verify){
        char pilih;
        do{
            system("cls");
            cout<<"login berhasil"<<endl;
            cout<<"=== Menu Utama === "<<endl;
            cout<<"1. Tambah Buku"<<endl;
            cout<<"2. Lihat Daftar Buku"<<endl;
            cout<<"3. Hapus Buku"<<endl;
            cout<<"4. Cari Buku"<<endl;
            cout<<"5. Urutkan Buku"<<endl;
            cout<<"6. Keluar"<<endl;
            cout<<"Pilih Menu : ";cin>>menu;
            switch(menu){
                case 1:
                tambahBuku();
                break;
                case 2:
                daftarBuku();
                break;
                case 3:
                hapusBuku();
                break;
                case 4:
                cariBuku();
                break;
                case 5:
                urutkanBuku(menu);
                break;
                case 6:
                break;
                default: break;
            }
            cout<<"ulang menu? : ";cin>>pilih;
        }while(pilih!='t');
            
    }
}
bool login(bool verify){
    int i=3;
    do{
        system("cls");
        string user;string pass;
        cout<<"== Login Page =="<<endl;
        cout<<"Input:"<<endl;
        cout<<"Nama Pengguna : ";cin>>user;
        cout<<"Password (3 angka terakhir NIM): ";cin>>pass;
        if(user=="arsya" && pass=="062") verify=true;
        else cout<<"login kamu gagal. sisa kesempatan :"<<i<<endl;
        if(i==0) cout<<"kesempatan kamu habis"<<endl;
        i--;
        cout<<endl;
        system("pause");
    }while(verify==false && i>=0);

    return verify;
}
void tambahBuku(){
    int bukuQty;
    cout<<"Mau input berapa buku? : ";cin>>bukuQty;
    
    for(int i=0;i<bukuQty;i++){
        cout<<"Buku "<<i+1<<endl;
        cout<<"Judul : ";cin.ignore();getline(cin,judulBuku[a]);
        cout<<"Pengarang : ";getline(cin,pengarangBuku[a]);
        cout<<"Tahun Terbit : ";cin>>tahunBuku[a];
        a++;
    }
}
void daftarBuku(){
    cout<<"=== DAFTAR BUKU ==="<<endl;
    cout<<setfill('=')<<setw(100)<<"\n";
    cout<<setfill(' ')<<"No"<<setw(30)<<"Judul Buku"<<setw(30)<<"Pengarang"<<setw(30)<<"Tahun Terbit"<<endl;
    cout<<setfill('-')<<setw(100)<<"\n";
    for(int i=0;i<a;i++){
        cout<<setfill(' ')<<i+1<<setw(30)<<judulBuku[i]<<setw(30)<<pengarangBuku[i]<<setw(30)<<tahunBuku[i]<<endl;
    }
   cout<<setfill('=')<<setw(100)<<"\n";
}

void hapusBuku(){
    daftarBuku();
    int hapus;
    cout<<"===Hapus Buku==="<<endl;
    cout<<"Berapa Nomor Buku yang ingin dihapus? :";cin>>hapus;
    for(int i=hapus-1;i<a;i++){
        judulBuku[i]=judulBuku[i+1];
        pengarangBuku[i]=pengarangBuku[i+1];
        tahunBuku[i]=tahunBuku[i+1];
    }
    a--;
    daftarBuku();
}

void cariBuku(){
    string cari;
    cout<<"=== CARI BUKU ==="<<endl;
    cout<<"Masukkan judul atau pengarang buku : ";cin.ignore();getline(cin,cari);
    cout<<"Hasil Pencarian : "<<endl;
    for(int i=0;i<a;i++){
        if(cari==judulBuku[i] || cari==pengarangBuku[i]){
            cout<<"No : "<<i+1<<endl;
            cout<<"Judul Buku : "<<judulBuku[i]<<endl;
            cout<<"Pengarang Buku : "<<pengarangBuku[i]<<endl;
            cout<<"Tahun Terbit : "<<tahunBuku[i]<<endl;
        }
    }
    cout<<"--------------------------------------------------"<<endl;
}

void urutkanBuku(int menu){
    cout<<"=== URUTKAN BUKU ==="<<endl;
    cout<<"1. Menurut Judul"<<endl;
    cout<<"2. Menurut Tahun Terbit"<<endl;
    cout<<"pilih : ";cin>>menu;
    switch(menu){
        case 1:
        break;
        case 2:
        break;
    }
}