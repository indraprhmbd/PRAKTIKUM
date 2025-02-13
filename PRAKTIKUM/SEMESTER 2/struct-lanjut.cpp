#include <iostream>
#include <string.h>
using namespace std;
int main(){

   struct mahasiswa{
        int Algoritma;
        int Jarkom;
        int Basdat;
   };

   int jumlahMhs=5;
   mahasiswa mhs[jumlahMhs];
   float meanMatkul[3]={0};
//    int jumlahNilai[jumlahMhs];
   system("cls");
   for(int i=0;i<jumlahMhs;i++){
    cout<<"input mhs ke - "<<i+1<<endl;
    cout<<"Algo : ";cin>>mhs[i].Algoritma;
    cout<<"Jarkom : ";cin>>mhs[i].Jarkom;
    cout<<"Basdat : ";cin>>mhs[i].Basdat;
   }
   system("cls");
   for(int i=0;i<jumlahMhs;i++){
    cout<<"mahasiswa ke "<<i+1<<endl;
    cout<<"Algo : "<<mhs[i].Algoritma<<endl;
    cout<<"Jarkom : "<<mhs[i].Jarkom<<endl;
    cout<<"Basdat : "<<mhs[i].Basdat<<endl;
    cout<<"Average : "<<(mhs[i].Algoritma+mhs[i].Jarkom+mhs[i].Basdat)/3<<endl;
   }

   for(int i=0;i<jumlahMhs;i++){
    meanMatkul[0]+=mhs[i].Algoritma;
    meanMatkul[1]+=mhs[i].Jarkom;
    meanMatkul[2]+=mhs[i].Basdat;
   }
   for(int i=0;i<3;i++){
    meanMatkul[i]/=5;
   }

   cout<<"rerata Algo :"<<meanMatkul[0]<<endl;
   cout<<"rerata Jarkom:"<<meanMatkul[1]<<endl;
   cout<<"rerata Basdat :"<<meanMatkul[2]<<endl;

}
