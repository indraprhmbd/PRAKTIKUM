#include <iostream>
using namespace std;

int pangkatDua(int a){
    if(a==1) return 2;
    else return 2*pangkatDua(a-1);
}

int kelipatanTiga(int a){
    int b=a*3;
    if(b==0) return 0;
    else if(a==1)return 3;
    else return b + kelipatanTiga(a-1);
}
void kelipatanTIGA(){
    int b;
    cout<<"Menghitung kelipatan 3"<<endl;
    cout<<"Masukkan angka : ";cin>>b;
    cout<<"Hasil : ";
    for(int i=1;i<=b;i++){
        cout<<i*3<<" + ";
    }
    cout<<" = "<<kelipatanTiga(b)<<endl;
}


int pangkat(int a,int b){
    if(b==0) return 1;
    else return a*pangkat(a,b-1);
}

int main(){
    char pilih;
    do{
        system("cls");
        int menu;
        cout<<"==MENU=="<<endl;
        cout<<"1. Menghitung 2 pangkat"<<endl;
        cout<<"2. menghitung kelipatan 3"<<endl;
        cout<<"3. menghitung bilangan berpangkat"<<endl;
        cout<<"pilih : ";cin>>menu;

        switch(menu){
            case 1: 
            int a;
            cout<<"Menghitung 2 Pangkat "<<endl;
            cout<<"Masukkan pangkat : ";cin>>a;
            cout<<"Hasil 2 pangkat "<<a<<" adalah : "<<pangkatDua(a)<<endl;
            break;

            case 2:
            kelipatanTIGA();
            break;

            case 3: 
            int c,d;
            cout<<"menghitung pangkat"<<endl;
            cout<<"Basis : ";cin>>c;
            cout<<"Pangkat : ";cin>>d;
            cout<<c<<" pangkat "<<d<<" : "<<pangkat(c,d)<<endl;

            default: break;
        }
        cout<<endl<<"ingin mengulang? (y/t) : ";cin>>pilih;
    }while (pilih=='y');

}