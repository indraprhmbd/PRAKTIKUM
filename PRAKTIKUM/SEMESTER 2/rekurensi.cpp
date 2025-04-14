#include <iostream>
using namespace std;

int main(){
    int i, S, x, n;
    x=0;
    S=0;
    cout<<"Sampai suku ke : ";cin>>n;
    i=1;

    while(i<=n){
        x=2*i;
        S+=x;
        cout<<"Hasil suku ke ["<<i<<"]: "<<x<<endl;
        i++;
    }
    cout<<"S : "<<S;
}