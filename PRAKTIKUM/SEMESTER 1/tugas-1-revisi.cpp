#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //deklarasi variabel
    string nama, kelas;
    long nim;
    //inputan value ke variabel
    cout<<"Masukkan :";
    cout<<"\nNama \t: ";
    getline(cin, nama);
    cout<<"\nNIM \t: ";
    cin>>nim;
    cout<<"\nKelas \t: ";
    cin.ignore();
    getline(cin,kelas);
    //menampilkan hasil inputan
    cout<<"\nInilah data Anda : ";
    cout<<"\nNama \t: "<<nama;
    cout<<"\nNIM \t: "<<nim;
    cout<<"\nKelas \t: "<<kelas;
    //tampilan dalam bentuk tabel
    cout<<"\n\nDalam bentuk tabel : \n";
    cout<<setfill('=')<<setw(60)<<" "<<endl;
    cout<<setfill(' ')<<"NIM"<<setw(15)<<" | Nama"<<setw(35)<<" | Kelas"<<setw(10)<<endl;
    cout<<setfill('=')<<setw(60)<<" "<<endl;
    cout<<setfill(' ')<<nim<<setw(5)<<" | "<<nama<<setw(4)<<" | "<<kelas<<setw(10)<<endl;
    cout<<setfill('=')<<setw(60)<<" "<<endl;
    cout<<endl<<endl;
    //mendeklarasi variabel input yaitu celcius
    float celcius;
    //membuat input dengan tampilan
    cout<<"input celcius = ";
    //menginput value oleh user
    cin>>celcius;
    //menampilkan hasil konversi setelah operasi hitung
    cout<<"Fahrenheit = "<<(9/5 * celcius) + 32<<" F"<<endl;
    cout<<"Kelvin = "<<273 + celcius<<" K"<<endl;
    cout<<"Reamur = "<<(4/5 * celcius)+ 32<<" R"<<endl;
}