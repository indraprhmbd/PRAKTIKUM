#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){    
    system("cls");
    // char ulangi='y';
    // int count,counter=count;
    // cin>>count;
    // while(counter>5){
    //     counter++;
    // }
    // cout<<"Kamu mengulang sebanyak : "<<count<<endl;
    int j=0,k=0;
    cout<<"FOR"<<endl;
    for(int i=0;i<=6;i++){
        cout<<i<<" Hallo"<<endl;
    }
    cout<<"-- Do While -- "<<endl;
    do{
        cout<<j<<" Hallo"<<endl;
        j++;
    }while(j<=5);

    cout<<"--- While Do ---\n";
    while (k<=5){
        cout<<k<<" Hallo"<<endl;
        k++;
    }
}
