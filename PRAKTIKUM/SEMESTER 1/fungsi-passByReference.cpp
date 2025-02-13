#include <iostream>
using namespace std;

void tampil (int &x){
    x+=5;
    cout<<x<<endl;
}

int main(){
    system("cls");
    int nilai=5;
    cout<<"nilai awal : "<<nilai<<endl;
    tampil(nilai);
    cout<<"nilai akhir : "<<nilai<<endl;
}