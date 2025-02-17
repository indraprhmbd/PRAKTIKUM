#include <iostream>
using namespace std;

struct Data{
    int angka;
    string kata;
};

Data dosen[100], mhs[100];
int jumlahDosen=0,jumlahMhs=0;

int outData(int angka, string kata){
    // cout<<"OUTPUT :"<<endl;
    cout<<"No : "<<angka<<endl;
    cout<<"Nama : "<<kata<<endl;
    return 0;
}
int inData(int &angka, string &kata){
    // cout<<"INPUT : "<<endl;
    cout<<"No: ";cin>>angka;
    cout<<"Nama : ";cin.ignore();getline(cin,kata);
    cout<<"------------------------"<<endl;    
    return 0;           
}
void outputData(int menu,int qty){
    if(qty==0)cout<<"== NONE =="<<endl;
    for(int i=0;i<qty;i++){
        cout<<"["<<i+1<<"]";
        if(menu==1){outData(dosen[i].angka,dosen[i].kata);}
        else if(menu==2){outData(mhs[i].angka,mhs[i].kata);}
        else break;
    }
}


int deleteData(int num,int menu,int &qty){
    for(int i=num-1;i<qty;i++){
        if(menu==1){
            dosen[i].angka=dosen[i+1].angka;
            dosen[i].kata=dosen[i+1].kata;
        }else if(menu==2){
            mhs[i].angka=mhs[i+1].angka;
            mhs[i].kata=mhs[i+1].kata;
        }
    }
    if(menu==1){jumlahDosen--;qty--;}
    else if(menu==2){jumlahMhs--;qty--;}
    return 0;
}


void Menu(int menu){
    int submenu;
    int qty=0,count=0;    
    system("cls");
    if(menu==1)cout<<"MENU DATA DOSEN"<<endl;
    else if(menu==2)cout<<"MENU DATA MAHASISWA"<<endl;
    cout<<"1. Input"<<endl;
    cout<<"2. Output"<<endl;
    cout<<"3. Hapus"<<endl;
    cout<<"4. Status"<<endl;
    cout<<"5. Cari"<<endl;
    cout<<"6. Kembali"<<endl;
    cout<<"pilih : ";cin>>submenu;
    
    //KEMBALI
    if(submenu==6)system("exit");
    system("cls");

    //INPUT
    if(submenu==1){
        cout<<"Menu Input"<<endl;
        cout<<endl<<"STATUS | "<<"Jumlah Dosen : "<<jumlahDosen<<" | Jumlah Mahasiswa : "<<jumlahMhs<<endl;
        cout<<"Banyak data : ";cin>>qty;cout<<endl;

        if(menu==1)count=jumlahDosen;
        else if(menu==2)count=jumlahMhs;

        for(int i=count;i<count+qty;i++){
            cout<<"["<<i+1<<"]";
            if(menu==1){inData(dosen[i].angka,dosen[i].kata);if(jumlahDosen==100)jumlahDosen=0;jumlahDosen++;}
            else if(menu==2){inData(mhs[i].angka,mhs[i].kata);if(jumlahMhs==100)jumlahMhs=0;jumlahMhs++;}
            else break;
        }

    //OUTPUT
    }else if(submenu==2){
        if(menu==1)qty=jumlahDosen;if(menu==2)qty=jumlahMhs;
        // if(qty==0)cout<<"== NONE =="<<endl;
        outputData(menu,qty);
    
    //HAPUS
    }else if(submenu==3){
        if(menu==1)qty=jumlahDosen;if(menu==2)qty=jumlahMhs;
        outputData(menu,qty);
        cout<<endl<<"Data ke berapa yang ingin dihapus? : ";cin>>submenu;
        if(submenu<1 || qty==0) {cout<<"ISI DATA DAHULU"<<endl;system("pause");system("exit");}
        else deleteData(submenu,menu,qty);
        system("cls");
        if(qty==0)cout<<"== NONE =="<<endl;
        outputData(menu,qty);

    //STATUS
    }else if(submenu==4){
        char in;
        if(menu==1){
            cout<<"| STATUS | Banyak Data :"<<jumlahDosen<<endl;
        }else if (menu==2){
            cout<<"| STATUS | Banyak Data : "<<jumlahMhs<<endl;
        }
    }
    else if(submenu==5){
        string in;
        if(menu==1)qty=jumlahDosen;if(menu==2)qty=jumlahMhs;
        cout<<"Masukkan nama yang akan dicari :";cin.ignore();getline(cin,in);
        for(int i=0;i<qty;i++){
            if(menu==1){
                if(in==dosen[i].kata){
                    cout<<"Data ditemukan!"<<endl;
                    outData(dosen[i].angka,dosen[i].kata);
                    break;
                }
            }else if(menu==2){
                if(in==mhs[i].kata){
                    cout<<"Data ditemukan!"<<endl;
                    outData(mhs[i].angka,mhs[i].kata);
                    break;
                }
            }
        }
    }
    system("pause");
}

int main(){
    char ulang='t';
    do{
        system("cls");
        int menu;
        cout<<"MENU DATA :"<<endl;
        cout<<"1. Data Dosen"<<endl;
        cout<<"2. Data Mahasiswa"<<endl;
        cout<<"3. Status"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"pilih : ";cin>>menu;
        if(menu==3) {cout<<endl<<"STATUS | "<<"Jumlah Dosen : "<<jumlahDosen<<" | Jumlah Mahasiswa : "<<jumlahMhs<<endl;
        system("pause");}
        if(menu<3) Menu(menu);
        else if(menu==4)
        {cout<<"Yakin ingin keluar? (y/t): ";cin>>ulang;}
    }while(ulang!='y');
}