#include <iostream>
using namespace std;

struct Data{
    int angka;
    string kata;
};

Data dosen[100], mhs[100];
int jumlahDosen=0,jumlahMhs=0;

int outData(int nim, string nama){
    cout<<"OUTPUT :"<<endl;
    cout<<"---------------------"<<endl;    
    cout<<"Nim : "<<nim<<endl;
    cout<<"Nama : "<<nama<<endl;
    return 0;
}
int inData(int &nim, string &nama){
    cout<<"INPUT : "<<endl;
    cout<<"Nim: ";cin>>nim;
    cout<<"Nama : ";cin.ignore();getline(cin,nama);
    return 0;
}
void outputData(int menu,int qty){
    for(int i=0;i<qty;i++){
        cout<<"["<<i+1<<"]";
        if(menu==1){outData(dosen[i].angka,dosen[i].kata);}
        else if(menu==2){outData(mhs[i].angka,mhs[i].kata);}
        else break;
    }
}

int deleteData(int num,int menu,int qty){
    for(int i=num-1;i<qty;i++){
        if(menu==1){
            dosen[i].angka=dosen[i-1].angka;
            dosen[i].kata=dosen[i-1].kata;
        }else if(menu==2){
            mhs[i].angka=mhs[i-1].angka;
            mhs[i].kata=mhs[i-1].kata;
        }
    }
    return 0;
}



void Menu(int menu){
    int submenu;
    int qty=0;    
    system("cls");
    if(menu==1)cout<<"MENU DATA DOSEN"<<endl;
    else if(menu==2)cout<<"MENU DATA MAHASISWA"<<endl;
    cout<<"1. Input"<<endl;
    cout<<"2. Output"<<endl;
    cout<<"3. Hapus"<<endl;
    cout<<"4. Kembali"<<endl;
    cout<<"pilih : ";cin>>submenu;
    if(submenu==4)system("exit");
    system("cls");
    if(menu==1)qty=jumlahDosen;if(menu==2)qty=jumlahMhs;
    if(submenu==1){
        cout<<"Menu Input"<<endl;
        cout<<endl<<"STATUS | "<<"Jumlah Dosen : "<<jumlahDosen<<" | Jumlah Mahasiswa : "<<jumlahMhs<<endl;
        cout<<"Banyak data : ";cin>>qty;
        for(int i=0;i<qty;i++){
            if(menu==1){inData(dosen[jumlahDosen+i].angka,dosen[jumlahDosen+i].kata);jumlahDosen++;}
            else if(menu==2){inData(mhs[jumlahMhs+i].angka,mhs[jumlahMhs+i].kata);jumlahMhs++;}
            else break;
        }
        
    }else if(submenu==2){
        if(qty==0)cout<<"== NONE =="<<endl;
        outputData(menu,qty);
        
    }else if(submenu==3){
        outputData(menu,qty);
        cout<<"data ke berapa yang ingin dihapus? : ";cin>>submenu;
        deleteData(submenu,menu,qty);
        
    }
}

int main(){
    int a;
    char ulang='t';
    do{
        system("cls");
        int menu;
        cout<<"MENU DATA :"<<endl;
        cout<<"1. Data Dosen"<<endl;
        cout<<"2. Data Mahasiswa"<<endl;
        cout<<"pilih :";cin>>menu;
        Menu(menu);
        cout<<"ingin ulang? (y/t): ";cin>>ulang;
    }while(ulang!='t');
}