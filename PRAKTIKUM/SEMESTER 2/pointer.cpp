#include <iostream>
using namespace std;
int main(){
    int umur=18;
    int *pUmur=&umur;
    int **pUmur1=&pUmur;
    cout<<"Alamat variabel umur : "<<&umur<<endl;
    cout<<"Isi variabel umur : "<<pUmur<<endl;
    cout<<"Alamat variabel pUmur : "<<&pUmur<<endl;
    cout<<"Isi dari alamat variabel pUmur : "<<*pUmur<<endl;
    cout<<"Isi dari alamat variabel pUmur : "<<**pUmur1<<endl;
    *pUmur=20;
    cout<<"var umur yang baru : "<<umur<<endl;

    int nilai[]={80,60,87,89,100};
    cout<<"Array tanpa index : "<<nilai<<endl;
    cout<<"Elemen ke - 1 : "<<*nilai<<endl;
    cout<<"Elemen ke - 2 : "<<*(nilai+1)<<endl;

    int arr[]={1,2,3,3};
    for(int i : arr) cout<<arr[i];
    
    float *ipk = new float[3];
    *ipk = 4.0;
    *(ipk+1) = 2.0;
    delete[] ipk;
}