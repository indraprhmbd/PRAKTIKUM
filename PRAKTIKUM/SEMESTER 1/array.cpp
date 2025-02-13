#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    // int target,n,counter;
    // int nums[n];
    // cin>>n;
    // cin>>target;
    // for(int i=0;i<=n;i++){
    //     cin>>nums[i];
    // }
    // cout<<nums[2];
    system("cls");
    int n;
    float nilai[n];
    double hasil=0.0;
    cout<<"Masukkan banyak data : ";cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Masukkan data ke- "<<i<<" : ";cin>>nilai[i-1];
        hasil+=nilai[i-1];
    }
    cout<<"rata-rata : "<<hasil/n<<endl;
    system("pause");
    getch();
    // return 0;
}