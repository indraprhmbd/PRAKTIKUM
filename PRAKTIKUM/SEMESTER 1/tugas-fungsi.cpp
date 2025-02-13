#include <iostream>
#include <iomanip>
using namespace std;
//ARSYADI INDRA H.P (062)

//Deklarasi Fungsi-fungsi 
bool tahunKabisat(int a);
int hitungDigit(int a);
int jamKeDetik(int a,int b,int c);
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
        cout<<"1. Tahun Kabisat"<<endl;
        cout<<"2. Hitung Jumlah Digit"<<endl;
        cout<<"3. Konversi Jam ke Detik"<<endl;
        cout<<"4. Menentukan Nilai Maksimum"<<endl;
        cout<<"5. Hitung BMI"<<endl;
        cout<<"6. Keluar"<<endl;
        cout<<"Pilih : ";cin>>menu;
        cout<<endl;

        if(menu==6) break; //Program akan selesai apabila user input 4

        switch(menu){
            case 1:
            int tahun;
            cout<<"== Tahun Kabisat =="<<endl;
            cout<<"Masukkan Tahun : ";cin>>tahun;
            if(tahunKabisat(tahun)) cout<<tahun<<" adalah tahun kabisat"<<endl;
            else cout<<tahun<<" bukan tahun kabisat"<<endl;
            break;

            case 2 :
            int bilangan;
            cout<<"== Hitung Jumlah Digit =="<<endl;
            cout<<"Masukkan Bilangan (12345) : "; cin>>bilangan;
            //Error Handling apabila ada kesalahan input
            if(bilangan>=1999999999) cout<<"Bilangan Terlalu Besar!"<<endl; 
            //jika input user benar, akan program akan memberi output
            else if(bilangan>0) cout<<"Jumlah Digit : "<<hitungDigit(bilangan)<<endl;
            else cout<<"Mohon Hanya Memasukkan Bilangan Bulat Positif!"<<endl;
            break;

            case 3:
            int jam,menit,detik;
            cout<<"== Konversi Jam ke Detik =="<<endl;
            cout<<"Input : "<<endl;
            cout<<"Jam : ";cin>>jam;
            cout<<"Menit : ";cin>>menit;
            cout<<"Detik : ";cin>>detik;
            cout<<endl<<"Total Detik : "<<jamKeDetik(jam,menit,detik)<<" detik"<<endl;
            break;

            case 4 :
            int a,b,c;
            cout<<"== Menentukan Nilai Maksimum =="<<endl;
            cout<<"Input 3 Bilangan (1 2 3) : ";cin>>a>>b>>c;
            //inputan user akan masuk ke fungsi dibawah dan dikeluarkan hasilnya
            cout<<"Nilai Maksimum : "<<nilaiMaksimum(a,b,c)<<endl;
            break;

            case 5 : 
            float berat,tinggi;
            cout<<"== Hitung BMI =="<<endl;
            cout<<"Input : "<<endl;
            cout<<"Berat (kg): ";cin>>berat;
            cout<<"Tinggi (m): ";cin>>tinggi;
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
        if(menu>6) cout<<"input tidak valid"<<endl;
        if(menu>0) cout<<"Ulangi Menu? (y/t) : "; cin>>pilih;
        
    }while(pilih=='y'); //jika user menginput 'y', program menu akan berulang
}

bool tahunKabisat(int a){
    if(a%100==0 && a%400==0) return true;
    else if(a%4==0 && a%100!=0) return true;
    else return false;
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

int jamKeDetik(int a,int b, int c){
    return (a*3600) + (b*60) + c;
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
    return a/(b*b);
}