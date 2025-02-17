#include <iostream>
#include <string.h>
using namespace std;
int main(){

   
   // struct jadwal{
   //    string sesi,hari,matkul;
   // };
   
   
   struct publisher{
      string nama,tahun_terbit;
   };
   struct lagu{
      string judul,genre,tahun;
   };
   // lagu id;
   struct penyanyi{
      string nama;
      lagu id[5];
      publisher id;
   };

   penyanyi singer[2];
   penyanyi artis;

   singer[0].nama="Udin";
   singer[1].nama="Petot";
   singer[0].id[0].judul="Aku Anakmu";

   cout<<singer[0].nama<<endl;
   cout<<singer[1].nama<<endl;
   cout<<singer[0].id[0].judul<<endl;

   struct mahasiswa{
      int Algoritma;
      int Jarkom;
      int Basdat;
      string jadwal[100];
   };
   
   int jumlahMhs=7;
   // jadwal Jadwal[jumlahMhs];
   mahasiswa mhs[jumlahMhs];

   mhs[0].jadwal[0]="Senin 17 feb";
   mhs[0].Algoritma=80;
   mhs[0].Jarkom=80;
   mhs[0].Basdat=80;
   // Jadwal[0]={"08.00","Senin","Algoritma"};

   // cout<<mhs[0].Algoritma<<endl;
   // cout<<mhs[0].Jarkom<<endl;
   // cout<<mhs[0].Basdat<<endl;


//    int jumlahMhs=5;
//    mahasiswa mhs[jumlahMhs];
//    float meanMatkul[3]={0};
// //    int jumlahNilai[jumlahMhs];
//    system("cls");
//    for(int i=0;i<jumlahMhs;i++){
//     cout<<"input mhs ke - "<<i+1<<endl;
//     cout<<"Algo : ";cin>>mhs[i].Algoritma;
//     cout<<"Jarkom : ";cin>>mhs[i].Jarkom;
//     cout<<"Basdat : ";cin>>mhs[i].Basdat;
//    }
//    system("cls");
//    for(int i=0;i<jumlahMhs;i++){
//     cout<<"mahasiswa ke "<<i+1<<endl;
//     cout<<"Algo : "<<mhs[i].Algoritma<<endl;
//     cout<<"Jarkom : "<<mhs[i].Jarkom<<endl;
//     cout<<"Basdat : "<<mhs[i].Basdat<<endl;
//     cout<<"Average : "<<(mhs[i].Algoritma+mhs[i].Jarkom+mhs[i].Basdat)/3<<endl;
//    }

//    for(int i=0;i<jumlahMhs;i++){
//     meanMatkul[0]+=mhs[i].Algoritma;
//     meanMatkul[1]+=mhs[i].Jarkom;
//     meanMatkul[2]+=mhs[i].Basdat;
//    }
//    for(int i=0;i<3;i++){
//     meanMatkul[i]/=5;
//    }

//    cout<<"rerata Algo :"<<meanMatkul[0]<<endl;
//    cout<<"rerata Jarkom:"<<meanMatkul[1]<<endl;
//    cout<<"rerata Basdat :"<<meanMatkul[2]<<endl;

}
