#include <iostream>
#include <iomanip>
using namespace std;
//ARSYADI INDRA H.P (062)

//Deklarasi Fungsi-fungsi 
int hitungDigit(int a);
int nilaiMaksimum(int a,int b, int c);
float bmi(float a, float b);


int main(){
    //deklarasi variabel
    int menu;
    char pilih;
    do{  
        //Tampilan Menu, menu berulang jika user menginput pilih='y'
        system("cls");
        cout<<"=== MENU ==="<<endl;
        cout<<"1. Hitung Jumlah Digit"<<endl;
        cout<<"2. Menentukan Nilai Maksimum"<<endl;
        cout<<"3. Hitung BMI"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Pilih : ";cin>>menu;
        cout<<endl;

        if(menu==4) break; //Program akan selesai apabila user input 4

        switch(menu){
            case 1 :
            int bilangan;
            cout<<"== Hitung Jumlah Digit =="<<endl;
            cout<<"Masukkan Bilangan (12345) : "; cin>>bilangan;
            //Error Handling apabila ada kesalahan input
            if(bilangan>=1999999999) cout<<"Bilangan Terlalu Besar!"<<endl; 
            //jika input user benar, akan program akan memberi output
            else if(bilangan>0) cout<<"Jumlah Digit : "<<hitungDigit(bilangan)<<endl;
            else cout<<"Mohon Hanya Memasukkan Bilangan Bulat Positif!"<<endl;
            break;

            case 2 :
            int a,b,c;
            cout<<"== Menentukan Nilai Maksimum =="<<endl;
            cout<<"Input 3 Bilangan (1 2 3) : ";cin>>a>>b>>c;
            //inputan user akan masuk ke fungsi dibawah dan dikeluarkan hasilnya
            cout<<"Nilai Maksimum : "<<nilaiMaksimum(a,b,c)<<endl;
            break;

            case 3 : 
            float berat,tinggi;
            cout<<"== Hitung BMI =="<<endl;
            cout<<"Input : "<<endl;
            cout<<"Berat (kg): ";cin>>berat;
            cout<<"Tinggi (cm): ";cin>>tinggi;
            //Penggunaan if else untuk menghindari kesalahan input dari user
            if(berat>0 && tinggi>0){
                //Penggunaan setprecision() <iomanip> untuk menampilkan hanya 2 angka
                //di belakang koma
                cout<<"BMI Anda : "<<setprecision(4)<<bmi(berat,tinggi);
                float x=bmi(berat,tinggi);
                //pengelompokan kategori BMI dengan if else
                if(x<18.5)cout<<" (Kurus)"<<endl;
                else if(x>=18.5 && x<=24.9) cout<<" (Normal)"<<endl;
                else if(x>=25 && x<=29.9)cout<<" (Gemuk)"<<endl;
                else if(x>=30)cout<<" (Obesitas)"<<endl;
            //erorr handling apabila user melakukan kesalahan input
            } else cout<<"Mohon Masukkan Berat atau Tinggi dengan benar (riil positif)"<<endl;
            break;

            default :
            break;

        } 
        cout<<endl;
        if(menu>4) cout<<"input tidak valid"<<endl;
        if(menu>0) cout<<"Ulangi Menu? (y/t) : "; cin>>pilih;
        
    }while(pilih=='y'); //jika user menginput 'y', program menu akan berulang
}


int hitungDigit(int a){
    int counter=0;//deklarasi dan reset counter

    //menggunakan prinsip menggeser koma
    //123 => 12.3 => 1.23 => 0.123
    while(a>0){
        a/=10;
        counter++;
    }
    return counter;
}

int nilaiMaksimum(int a,int b,int c){
    //menggunakan if else untuk membandingkan 3 bilangan
    if(a>b && a>c){
        return a;
    }else if(b>c){
        return b;
    } else {
        return c;
    }
}

float bmi(float a,float b){
    //hanya mengembalikan nilai sesuai rumus BMI
    //Berat(kg) / [tinggi(m)]^2
    b/=100;
    return a/(b*b);
}