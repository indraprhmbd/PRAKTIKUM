#include <iostream>
#include <cstdlib>
#include <string>
#define MAX_STUDENT 100
using namespace std;

struct mhs{
    string *nama;
    float *nilai;
    int size;
};

mhs createData(int size){
    mhs Data;
    Data.size=size;
    Data.nama=new string[size];
    Data.nilai=new float[size];
    return Data;
}

void freeData(mhs& Data){
    delete[] Data.nama;
    delete[] Data.nilai;
}

int main(){
    char ulang='y';
    int jumlah=0;
    mhs myData = createData(MAX_STUDENT);
    
    do{
        char menu;
        cout<<"+================================+"<<endl;
        cout<<"|       MENU DATA MAHASISWA      |"<<endl;
        cout<<"+================================+"<<endl;
        cout<<"| [1] Input Data Mahasiswa       |"<<endl;
        cout<<"| [2] Tampilkan Data Mahasiswa   |"<<endl;
        cout<<"+================================+"<<endl;
        cout<<"Pilih : "; cin>>menu;

        switch(menu){
            case '1' :
                int qty;

                if (jumlah + qty > MAX_STUDENT) {
                    cout << "Data melebihi kapasitas maksimum!" << endl;
                    break;
                }
                cout<<"+================================+"<<endl;
                cout<<"| [1] Input Data Mahasiswa       |"<<endl;
                cout<<"+================================+"<<endl;
                cout<<"Mau masukkan berapa data? : ";cin>>qty;
                cin.ignore();
                for(int i=jumlah;i<qty+jumlah;i++){
                    cout<<"Masukkan Nama : ";
                    getline(cin, myData.nama[i]);
                    cout<<"Masukkan Nilai : ";
                    cin>>myData.nilai[i];
                }
                jumlah+=qty;
                cout<<"Data telah masuk!"<<endl;
            break;
            case '2' :
                if(jumlah!=0){
                    cout<<"+================================+"<<endl;
                    cout<<"| [2] Tampilkan Data Mahasiswa   |"<<endl;
                    cout<<"+================================+"<<endl;

                }else cout<<"Kosong! mohon isi data terlebih dahulu"<<endl;
            break;
            default : ulang='y';
        }
        cout<<"Ulangi menu (y/n) : ";cin>>ulang;
    }while(ulang!='n');

    freeData(myData);
    return 0;
}