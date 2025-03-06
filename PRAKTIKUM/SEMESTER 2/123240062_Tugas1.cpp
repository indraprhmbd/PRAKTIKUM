#include <iostream>
// #include <string>
using namespace std;

int jumlahMhs=0;

struct Mahasiswa {
    string nim;
    string nama;
    float ipk;
};

const int maxData=100;
Mahasiswa mhs[maxData];

int inputMhs(){
    int qty;
    cout<<"+======================+"<<endl;
    cout<<"| Input Data Mahasiswa |"<<endl;
    cout<<"+======================+"<<endl;
    cout<<"Mau input berapa banyak Mahasiswa : ";cin>>qty;
    for(int i=jumlahMhs;i<jumlahMhs+qty;i++){
        cout<<"Masukkan data mahasiswa ke - "<<i+1<<endl;
        cout<<"NIM \t: ";cin>>mhs[i].nim;
        cout<<"Nama \t: ";cin.ignore();getline(cin,mhs[i].nama);
        cout<<"IPK \t: ";cin>>mhs[i].ipk;
    }
    if(jumlahMhs>100) jumlahMhs=0; //menghindari overflow maxdata
    jumlahMhs+=qty;

    return 0;
}

void tampilkanMhs(int N){
    if(N<0) return; //basis rekursif
    else {
        cout<<"Data Mahasiswa ["<<N+1<<"]"<<endl;
        cout<<"NIM \t: "<<mhs[N].nim<<endl;
        cout<<"Nama \t: "<<mhs[N].nama<<endl;
        cout<<"IPK \t: "<<mhs[N].ipk<<endl;
        tampilkanMhs(N-1);
    }
}

int sequential_search_nim(string target){
    int i=0;
    int N = maxData;
    mhs[N-1].nim=target; //sentinel
    while(target!=mhs[i].nim && target!=mhs[i].nama) i++;
    
    if(i<N-1) {
        cout<<"Data Mahasiswa ditemukan! : "<<"["<<i+1<<"]"<<endl;
        cout<<"NIM \t: "<<mhs[i].nim<<endl;
        cout<<"Nama \t: "<<mhs[i].nama<<endl;
        cout<<"IPK \t: "<<mhs[i].ipk<<endl;
        return 0;
    }
    return -1;
}

int binary_search_nim(int l,int r,string target){
    if (l > r) return -1; // Basis rekursi, jika tidak ditemukan
    int mid = l + (r - l) / 2; 
    if (mhs[mid].nim == target) return mid; 
    if (mhs[mid].nim > target) return binary_search_nim(l, mid - 1, target); // Cari di kiri
    return binary_search_nim(mid + 1, r, target); // Cari di kanan
}

int main(){
    char ulang='t';
    do{
        char menu;
        system("cls");
        cout<<"=== Program Data Mahasiswa ===" <<endl;
        cout<<"Menu : "<<endl;
        cout<<"0. Input Mahasiswa "<<endl;
        cout<<"1. Tampilkan Mahasiswa "<<endl;
        cout<<"2. Tampilkan Mahasiswa (Terbalik)"<<endl;
        cout<<"3. Cari Mahasiswa (Sequential)"<<endl;
        cout<<"4. Cari Mahasiswa (Binary)"<<endl;
        cout<<"5. Keluar"<<endl;
        cout<<"pilih : ";cin>>menu;
        switch (menu){

            //input mhs
            case '0' : 
            inputMhs();
            break;
            //tampilan mhs for loop
            case '1' : 
                if(jumlahMhs==0){
                    cout<<"Kosong ! isi data mahasiswa terlebih dahulu!"<<endl;
                    system("pause");
                    break;
                }else {
                    cout<<"+==================+"<<endl;
                    cout<<"| Daftar Mahasiswa |"<<endl;
                    cout<<"+==================+"<<endl;
                    for(int i=0;i<jumlahMhs;i++){
                        cout<<"Data Mahasiswa ["<<i+1<<"]"<<endl;
                        cout<<"NIM \t: "<<mhs[i].nim<<endl;
                        cout<<"Nama \t: "<<mhs[i].nama<<endl;
                        cout<<"IPK \t: "<<mhs[i].ipk<<endl;
                    }
                }
                system("pause");
            break;

            //tampilan mhs rekursif
            case '2' : 
                if(jumlahMhs==0){
                    cout<<"Kosong ! isi data mahasiswa terlebih dahulu!"<<endl;
                    system("pause");
                    break;
                }else {
                    cout<<"+=============================+"<<endl;
                    cout<<"| Daftar Mahasiswa (inverted) |"<<endl;
                    cout<<"+=============================+"<<endl;
                    tampilkanMhs(jumlahMhs-1);
                }
                system("pause");
            break;

            //sequential search
            case '3' : 
                if(jumlahMhs==0){
                    cout<<"Kosong ! isi data mahasiswa terlebih dahulu!"<<endl;
                    system("pause");
                    break;
                }else {
                    string target_nim;
                    cout<<"+===================+"<<endl;
                    cout<<"|   Cari Mahasiswa  |"<<endl;
                    cout<<"| Sequential Search |"<<endl;
                    cout<<"+===================+"<<endl;
                    cout<<"Masukkan NIM / Nama yang akan dicari : ";cin>>target_nim;
                    if(sequential_search_nim(target_nim)==-1) cout<<"Data tidak ditemukan!"<<endl;
                }
                system("pause");
            break;


            //binary search
            case '4' : 
                if(jumlahMhs==0){
                    cout<<"Kosong ! isi data mahasiswa terlebih dahulu!"<<endl;
                    system("pause");
                    break;
                }else {
                    char confirm;
                    string target_nim;
                    cout<<"+===================+"<<endl;
                    cout<<"|   Cari Mahasiswa  |"<<endl;
                    cout<<"|   Binary Search   |"<<endl;
                    cout<<"+===================+"<<endl;
                    cout<<"Apakah kamu sudah memasukkan data NIM dengan urut? (y/t) : ";cin>>confirm;
                    if(confirm=='y'){
                        string target;
                        cout<<"Masukkan NIM yang ingin dicari : ";cin>>target;
                        int res=binary_search_nim(0,jumlahMhs-1,target);
                        if(res==-1) cout<<"Data tidak ditemukan!"<<endl;
                        else {
                            cout<<"Data ditemukan! : "<<endl;
                            cout<<"Data Mahasiswa ["<<res+1<<"]"<<endl;
                            cout<<"NIM \t: "<<mhs[res].nim<<endl;
                            cout<<"Nama \t: "<<mhs[res].nama<<endl;
                            cout<<"IPK \t: "<<mhs[res].ipk<<endl;
                        }
                    }else {
                        cout<<"Mohon maaf data NIM harus urut.."<<endl;
                        system("pause");
                        break;
                    }
                }
                system("pause");
                break;
                
                case '5' : 
                cout<<"Yakin ingin keluar? (y/t) : ";cin>>ulang;
            break;

            default : ulang='t';
        }

    }while(ulang != 'y');
}