//Tugas Aulia Cahaya IF-H

#include <iostream>
using namespace std;
//variabel global
int jumlahMhs=0;
int jumlahBuku[10];

//struct
struct Buku {
    string judul;
    string kode;
    int lamaPinjam;
};

struct Peminjam {
    string nama;
    string nim;
    Buku buku[3];
};

//variabel struct
Peminjam mhs[10];

void input_data(){
    int qty_m,qty_b;
    cout<<"+================+"<<endl;
    cout<<"|   INPUT DATA   |"<<endl;
    cout<<"+================+"<<endl;
    cout<<"Input Jumlah Peminjam : ";
    cin >> qty_m;
    for(int i=jumlahMhs;i<jumlahMhs+qty_m;i++){
        cout<<"Input nama peminjam ke-"<<i+1<<" : ";cin.ignore();getline(cin,mhs[i].nama);
        cout<<"Input nim peminjam ke-"<<i+1<<" : ";cin>>mhs[i].nim;
        cout<<"Input jumlah Buku yangg dipinjam Peminjam ke-"<<i+1<<" : "; cin>>qty_b;
        jumlahBuku[i]=qty_b;
        cout<<"\tINPUT DATA BUKU"<<endl;
        for(int j=0;j<qty_b;j++){
            string judul,kode;int lama;
            
            cout<<"\tInput Judul Buku ke-"<<j+1<<" : ";
            cin.ignore();getline(cin,judul);
            cout<<"\tInput Kode Buku ke-"<<j+1<<" : ";
            getline(cin,kode);
            cout<<"\tInput Lama Peminjaman Buku ke-"<<j+1<<" (Dalam hari) : ";
            cin>>lama;
            cout<<endl;
            
            mhs[i].buku[j].judul=judul;
            mhs[i].buku[j].kode=kode;
            mhs[i].buku[j].lamaPinjam=lama;
        }
    }
    jumlahMhs+=qty_m;
}

int search_data(string target){
    int i=0;
    int N=sizeof(mhs)/sizeof(mhs[0]);//ambil panjang array

    mhs[N-1].nama=target;//sentinel (data duplikasi di array paling akhir)
    while(target!=mhs[i].nama) i++; //kalau data ga cocok i masi terus dilanjut
    if(i<N-1) return i; //klo data itu cocok sebelum dengan sentinel maka fungsi mengembalikan nilai i nya
    
    return -1; //jika kondisi di atas tidak memenuhi maka default returnnya -1 (tidak ditemukan) 

}
void output_data(int i){
    cout<<"["<<i+1<<"]Nama : "<<mhs[i].nama<<endl;
    cout<<"NIM : "<<mhs[i].nim<<endl;
    cout<<"Jumlah Buku yang dipinjam Peminjam ke-"<<i+1<<" : "<<jumlahBuku[i]<<endl<<endl;

    cout<<"\tDATA BUKU : "<<endl<<endl;
    for(int j=0;j<jumlahBuku[i];j++){

        string judul=mhs[i].buku[j].judul;
        string kode=mhs[i].buku[j].kode;
        int lama=mhs[i].buku[j].lamaPinjam;

        cout<<"\tJudul Buku ke-"<<j+1<<" \t: " <<judul<<endl;
        cout<<"\tKode Buku ke-"<<j+1<<" \t: "<<kode<<endl;
        cout<<"\tLama Peminjaman buku ke-"<<j+1<<" : "<<lama<<" hari"<<endl;
        cout<<endl;
    }
    cout<<endl;
}

void show_data(){
    char search='n';
    cout<<"+========================+"<<endl;
    cout<<"|        SHOW DATA       |"<<endl;
    cout<<"+========================+"<<endl;
    for(int i=0;i<jumlahMhs;i++){
        cout<<"Data Peminjam "<<"["<<i+1<<"]"<<endl;
        output_data(i);
    }
    system("pause");

    cout<<"Ingin mencari data? (y/n) : ";cin>>search;
    if(search=='y'){
        string targetNama;
        cout<<"+============================+"<<endl;
        cout<<"|    HASIL PENCARIAN DATA    |"<<endl;
        cout<<"+============================+"<<endl<<endl;
        cout<<"Cari nama peminjam : ";cin.ignore();getline(cin,targetNama);
        int res=search_data(targetNama);
        if(res==-1) 
            cout<< "Data tidak ditemukan!"<<endl;
        else {
            cout<<"\tOUTPUT DATA PEMINJAM YANG DICARI "<<endl;
            output_data(res);
        }
    }
}

int main(){
    char menuLoop='n';
    do{
        system("cls");
        char menu;
        cout<<"+========================+"<<endl;
        cout<<"|        MAIN MENU       |"<<endl;
        cout<<"+========================+"<<endl;
        cout<<"| 1. INPUT DATA          |"<<endl;
        cout<<"| 2. SHOW AND SEARCH     |"<<endl;
        cout<<"| 3. EXIT                |"<<endl;
        cout<<"+========================+"<<endl;
        cout<<"CHOOSE : ";
        cin>>menu;

        switch(menu){
            case '1' :
                system("cls");
                input_data();
            break;

            case '2':
                show_data();
                system("pause");
            break;

            case '3' :
                cout<<"Are u sure want to quit? (y/n) : ";cin>>menuLoop;
            break;

            default : menuLoop='n';
        }
    }while(menuLoop!='y');
}