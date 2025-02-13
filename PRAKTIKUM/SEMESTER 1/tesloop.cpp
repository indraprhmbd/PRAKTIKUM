#include <iostream>
using namespace std;

int main(){
    int panjang;
    cout<<"panjang : ";
    cin>>panjang;

        for (int i = 0; i < panjang; i++)
        {
            int z = 1;
            for (int j = 1; j <= panjang; j++){
                if(j>= panjang-i)
                {cout<<z<<" ";
                z++;
                }
                else cout<<" ";
            }
            
            cout<<endl;
        }
        
        for (int q = 0; q < panjang; q++){
            //cout<<q;
            //cout<<"# ";
            for (int g = 1; g <panjang ;g++){
                cout<<"#";
             
            }
        }
}