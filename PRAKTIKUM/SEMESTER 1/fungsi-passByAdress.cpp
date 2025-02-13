#include <iostream>
using namespace std;

void tampil(int *x){
    *x+=*x;
}

int main(){
    int nilai=5;
    cout<<"awal : " <<nilai<<endl;
    tampil(&nilai);
    cout<<"akhir : " <<nilai<<endl;
    cout<<nilai;
}