#include <iostream>
using namespace std;
int sum(int arr[],int n){
    return (n==0) ? arr[n] : arr[n] + sum(arr,n-1);
}

int main (){
    int index=7;
    int n=index;
    int arr[index]={12,43,64,42,6,54,12};
    cout<<"Penjumlahan ";
    for(int i=0;i<index;i++) cout<<arr[i]<<" ";
    cout<<": "<<sum(arr,n-1);
}