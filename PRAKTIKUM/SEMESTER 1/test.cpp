#include <iostream>
using namespace std;

int main (){
    float tinggi,berat,bmr;
    int umur,menu,i=1,submenu;
    char kelamin,pilih;
    int tingkatStress,tingkatAktifitas,stokBarang1,stokBarang2,stokBarang3,stokBarang4;
    int hargaBarang1,hargaBarang2,hargaBarang3,hargaBarang4;
    string user,pass;
    char namaBarang1[12],namaBarang2[12],namaBarang3[12],namaBarang4[12];
    char idBarang1[6],idBarang2[6],idBarang3[6],idBarang4[6],inputId[6];
    bool lanjut = true,valid1=false,ulang = true;

    do{
        system("cls");
        cout<<"===Menu===\n";
        cout<<"1. Menghitung Kebutuhan energi harian"<<endl;
        cout<<"2. Tuti Shop"<<endl; 
        cout<<"3. Exit"<<endl;
        cin>>menu;
        switch(menu){
            case 1: 
            cout<<"Masukkan Tinggi Badan Anda (cm) : ";cin>>tinggi;
            cout<<"Masukkan Berat Badan Anda (kg) : ";cin>>berat;
            cout<<"Masukkan Umur Anda : ";cin>>umur;
            cout<<"Masukkan Jenis Kelamin Anda (L/P) : ";cin>>kelamin;
            cout<<"Masukkan Tingkat Aktifitas Anda : \n";
            cout<<"1. Ringan\n";
            cout<<"2. Sedang\n";
            cout<<"3. Berat\n";
            cout<<"Masukkan Pilihan : ";cin>>tingkatAktifitas;
            cout<<"Masukkan Tingkat Stress Anda : \n";
            cout<<"1. Ringan\n";
            cout<<"2. Sedang\n";
            cout<<"3. Berat\n";
            cout<<"Masukkan Pilihan : ";cin>>tingkatStress;
            if(kelamin=='l'){
                bmr=66+(13.7*berat)+(5*tinggi)-(6.8*umur);
                switch(tingkatAktifitas){
                    case 1: //ringan
                    tingkatAktifitas=165*0.01;
                    break;
                    case 2 :
                    tingkatAktifitas=176*0.01;
                    break;
                    case 3 :
                    tingkatAktifitas=210*0.01;
                    break;
                }
                switch(tingkatStress){
                    case 1: //ringan
                    tingkatStress=14*0.1;
                    break;
                    case 2:
                    tingkatStress=15*0.1;
                    break;
                    case 3:
                    tingkatStress=2*1.0;
                    break;
                }
                cout<<"Kebutuhan energi hari ini anda sebanyak "<<bmr*tingkatAktifitas*tingkatStress<<" kkal";

            }else if(kelamin=='p'){
                bmr=65.5+(9.6*berat)+(1.7*tinggi)-(4.7*umur);
                switch(tingkatAktifitas){
                    case 1: //ringan
                    tingkatAktifitas=155*0.01;
                    break;
                    case 2 :
                    tingkatAktifitas=170*0.01;
                    break;
                    case 3 :
                    tingkatAktifitas=200*0.01;
                    break;
                }
                switch(tingkatStress){
                    case 1: //ringan
                    tingkatStress=14*0.1;
                    break;
                    case 2:
                    tingkatStress=15*0.1;
                    break;
                    case 3:
                    tingkatStress=2*1.0;
                    break;
                }
                cout<<"Kebutuhan energi hari ini anda sebanyak "<<bmr*tingkatAktifitas*tingkatStress<<" kkal";
            }
            menu=1;
            tingkatAktifitas=0;tingkatStress=0;
            cout<<"Program Selesai\n";system("pause");
            
            break;

            case 2:
            if(i==1){
            cout<<"Selamat datang ke Tuti shop"<<endl;
            cout<<"Mohon Login Terlebih Dahulu"<<endl;
            cout<<"Masukkan Username : ";cin>>user;
            cout<<"Masukkan Password : ";cin>>pass;
            }
            while(i<=3 && (user!="arsya" || pass!="123240062")){
                system("cls");
                cout<<"Masukkan Username : ";cin>>user;
                cout<<"Masukkan Password : ";cin>>pass;
                if(user!="arsya"|| pass!="123240062")cout<<"User atau Password Salah!"<<endl;
                if(i==3){cout<<"Coba Lagi Nanti\n";system("pause");system("exit");}
                i++;
            }
            if(user=="arsya"&&pass=="123240062"){
                cout<<"Username dan Password Benar"<<endl;
            do{
                system("cls");
                cout<<"===ADMIN PAGE==="<<endl;
                cout<<"Menu: "<<endl;
                cout<<"1. Input Stok Barang"<<endl;
                cout<<"2. Cetak Stok Barang"<<endl;
                cout<<"3. Cek Stok Barang"<<endl;
                cout<<"4. Exit"<<endl;
                cout<<"Masukkan Pilihan : ";cin>>submenu;
                switch(submenu){
                    case 1:
                    system("cls");
                    cout<<"PERHATIAN : Ketentuan Input ID:\n";
                    cout<<"ID Barang ditulis (2 huruf pertama barang + 00 + 2 digit NIM terakhir)\n";
                    cout<<"Contoh : (Bunga) menjadi bu0062\n";
                    cout<<"Siap Input ?\n\n";system("pause");
                    cout<<"Input Stok Barang \t\t: \n";
                    cout<<"Input Barang 1 \t\t: ";cin>>namaBarang1;
                    cout<<"Input ID Barang 1 \t: ";cin>>idBarang1;
                    cout<<"Input Jumlah Barang 1 \t: ";cin>>stokBarang1;
                    cout<<"Input Harga Barang 1 \t: ";cin>>hargaBarang1;
                    
                    cout<<"Input Barang 2 \t\t: ";cin>>namaBarang2;
                    cout<<"Input ID Barang 2 \t: ";cin>>idBarang2;
                    cout<<"Input Jumlah Barang 2 \t: ";cin>>stokBarang2;
                    cout<<"Input Harga Barang 2 \t: ";cin>>hargaBarang2;

                    cout<<"Input Barang 3 \t\t: ";cin>>namaBarang3;
                    cout<<"Input ID Barang 3 \t: ";cin>>idBarang3;
                    cout<<"Input Jumlah Barang 3 \t: ";cin>>stokBarang3;
                    cout<<"Input Harga Barang 3 \t: ";cin>>hargaBarang3;
                    
                    cout<<"Input Barang 4 \t\t: ";cin>>namaBarang4;
                    cout<<"Input ID Barang 4 \t: ";cin>>idBarang4;
                    cout<<"Input Jumlah Barang 4 \t: ";cin>>stokBarang4;
                    cout<<"Input Harga Barang 4 \t: ";cin>>hargaBarang4;

                    if(stokBarang1<0 || hargaBarang1<0){
                        stokBarang1=0;hargaBarang1=0;
                        cout<<"Error";
                        ulang=false;
                    }
                    if(stokBarang2<0 || hargaBarang2<0){
                        stokBarang2=0;hargaBarang2=0;
                        cout<<"Error";
                        ulang=false;
                    }                   
                    if(stokBarang3<0 || hargaBarang3<0){
                        stokBarang3=0;hargaBarang3=0;
                        cout<<"Error";
                        ulang=false;
                    }
                    if(stokBarang4<0 || hargaBarang4<0){
                        stokBarang4=0;hargaBarang4=0;
                        cout<<"Error";
                        ulang=false;
                    }
                    valid1=true;
                    pilih='y';
                    break;

                    case 2: 
                    system("cls");
                    cout<<"===INFORMASI STOK==="<<endl;
                    cout<<"Nama Barang \t: "<<namaBarang1<<endl;
                    cout<<"ID Barang \t: "<<idBarang1<<endl;
                    cout<<"Jumlah Barang \t: "<<stokBarang1<<endl;
                    cout<<"Harga Barang \t: Rp"<<hargaBarang1<<endl<<endl;

                    cout<<"Nama Barang \t: "<<namaBarang2<<endl;
                    cout<<"ID Barang \t: "<<idBarang2<<endl;
                    cout<<"Jumlah Barang \t: "<<stokBarang2<<endl;
                    cout<<"Harga Barang \t: Rp"<<hargaBarang2<<endl<<endl;

                    cout<<"Nama Barang \t: "<<namaBarang3<<endl;
                    cout<<"ID Barang \t: "<<idBarang3<<endl;
                    cout<<"Jumlah Barang \t: "<<stokBarang3<<endl;
                    cout<<"Harga Barang \t: Rp"<<hargaBarang3<<endl<<endl;

                    cout<<"Nama Barang \t: "<<namaBarang4<<endl;
                    cout<<"ID Barang \t: "<<idBarang4<<endl;
                    cout<<"Jumlah Barang \t: "<<stokBarang4<<endl;
                    cout<<"Harga Barang \t: Rp"<<hargaBarang4<<endl;
                    pilih='y';
                    system("pause");
                    break;

                    case 3:
                    while(valid1==true && pilih=='y'){
                        system("cls");
                        cout<<"===CEK STOK BARANG==="<<endl;
                        cout<<"Masukkan ID Barang : ";cin>>inputId;
                        cout<<idBarang1;
                        if(inputId==idBarang1){
                            cout<<"Nama Barang \t: "<<namaBarang1<<endl;
                            cout<<"ID Barang \t: "<<idBarang1<<endl;
                            cout<<"Jumlah Barang \t: "<<stokBarang1<<endl;
                            cout<<"Harga Barang \t: Rp"<<hargaBarang1<<endl;
                        }
                        else if(inputId==idBarang2){
                            cout<<"Nama Barang \t: "<<namaBarang2<<endl;
                            cout<<"ID Barang \t: "<<idBarang2<<endl;
                            cout<<"Jumlah Barang \t: "<<stokBarang2<<endl;
                            cout<<"Harga Barang \t: Rp"<<hargaBarang2<<endl;
                        }
                        else if(inputId==idBarang3){
                            cout<<"Nama Barang \t: "<<namaBarang3<<endl;
                            cout<<"ID Barang \t: "<<idBarang3<<endl;
                            cout<<"Jumlah Barang \t: "<<stokBarang3<<endl;
                            cout<<"Harga Barang \t: Rp"<<hargaBarang3<<endl;
                        }
                        else if(inputId==idBarang4){
                            cout<<"Nama Barang \t: "<<namaBarang4<<endl;
                            cout<<"ID Barang \t: "<<idBarang4<<endl;
                            cout<<"Jumlah Barang \t: "<<stokBarang4<<endl;
                            cout<<"Harga Barang \t: Rp"<<hargaBarang4<<endl;
                        }
                        system("pause");
                        cout<<"Ingin Cek Kembali? (y/n) : ";cin>>pilih;
                    }
                    break;
                    
                    case 4 :
                    ulang=false;
                    
                }
                    // while(ulang);
            
            }while(ulang==true);
            break;
            }
            // system("exit");

            
            case 3:
            lanjut=false;
            break;
        }
        while(menu<3);
    }while(menu<4);
}