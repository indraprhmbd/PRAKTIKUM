#include <iostream>
using namespace std;

//deklarasi void yang digunakan
void tambahGame();
void tampilGame();

//deklarasi varibel-variabel global
int i=0;
string namaGame[100];
string devGame[100];
int hargaGame[100];

int main(){
    char pilih;
    system("cls");
    //do-while loop untuk mengulang menu
    do{

        //menampilkan menu sederhana berjudul program e-dagame
        int menu;
        if(menu==2)system("cls");
        cout<<"=== PROGRAM E-DAGAME (PLATFORM E-DAGANG GAME) ==="<<endl<<endl;
        cout<<"Menu :"<<endl;
        cout<<"1. Tambah Data Game"<<endl;
        cout<<"2. Tampilkan Data Game"<<endl;
        cout<<"3. Keluar"<<endl;
        cout<<"Pilih Menu (1-3) : ";cin>>menu;
        cout<<endl;
        if(menu==3) break; //perulangan dan program akan selesai apabila user menginput 3
        switch(menu){
            case 1:
            //penggunaan void tambahGame() saat user memilih menu 1
            tambahGame();
            break;

            case 2:
            //penggunaan void tampilGame() saat user memilih menu 2
            tampilGame();
            break;

            //program akan mengeluarkan error message saat user menginput
            //diluar pilihan menu
            default: 
            cout<<"input invalid!"<<endl;
            break;
        }
        //pengulangan terjadi apabila user menginput 'y'
        cout<<endl<<"Ulangi Menu? (y/t) : ";cin>>pilih;
        //user dipaksa mengulang apabila menginput selain char 'y' dan 't'
        //agar data tidak hilang
        if(pilih!='y' && pilih!='t') pilih='y';
    }while(pilih!='t');
    

}
//deskripsi void tambahGame()
void tambahGame(){
    if(i==99){
        cout<<"game sudah penuh";
        i=0;
    }
        
    //penggunaan cin.ignore() dan getline() agar data string bisa menginput spasi
    cout<<"Masukkan Nama Game : ";cin.ignore();getline(cin,namaGame[i]);
    cout<<"Masukkan Harga Game : Rp";cin>>hargaGame[i];
    cout<<"Masukkan Nama Developer : ";cin.ignore();getline(cin,devGame[i]);
    cout<<"Data Game Berhasil ditambahkan!"<<endl;
    i++; //increment variabel i untuk index array data di atas
}
//deskripsi void tampilGame()
void tampilGame(){
    cout<<"Data Game : "<<endl;
    if(i==0) cout<<"Kosong.."<<endl;
    //perulangan k sebanyak i kali dan k digunakan sebagai index pemanggil
    //data array
    else if(i>0){
        for(int k=0;k<i;k++){
            cout<<k+1<<". Nama Game : "<<namaGame[k]<<", Harga : Rp "
            <<hargaGame[k]<<", Developer: "<<devGame[k]<<endl;
        }
    }
    
}