#include <iostream>
#include <cmath>
using namespace std;

int deretGeometri(int a,int r,int n){
    return (n==0) ? a : deretGeometri(a,r,n-1) + a*pow(r,n);
}

int main(){
    int a,r,n;
    a=1;r=2;n=5;
    cout<<"Deret Geometri "<<a<<"x"<<r<<" Sampai n = "<<n<<" : "<<deretGeometri(a,r,n);
    return 0;
}