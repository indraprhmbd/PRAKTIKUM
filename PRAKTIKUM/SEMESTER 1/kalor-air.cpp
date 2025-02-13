#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    char pilih;
    do{
        double Q;
        double m;
        double T1,Ta;
        double c;

        cout<<"input: "<<endl;
        cout<<"Q (J): ";cin>>Q;
        cout<<"m (gr) : ";cin>>m;
        cout<<"T awal : ";cin>>T1;
        cout<<"T akhir : ";cin>>Ta;
        cout<<"c : "<<setprecision(10)<<Q/(m*(Ta-T1))<<" J/g.C"<<endl;
        cout<<"Ulang menu (y/t) : ";cin>>pilih;

    }while(pilih!='t');
}