#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    system("cls");
    //deklarasi variabel
    int kategoriMenu,pilih,kuantitas,hargaDiskon,totalHarga;
    char pilihMenu;string kodeVoucher;
    int hargaBurger=20000,hargaFries=10000,hargaPasta=25000;
    int hargaEspresso=20000,hargaCappucino=20000,hargaLatte=15000;
    int hargaMacaron=20000,hargaTiramisu=20000,hargaCheesecake=15000;

    //menampilkan kategori menu
    cout<<"=== SELAMAT DATANG DI KEDAI KOPI SENJA SENDU ===\n\n";
    cout<<"1. Menu Makanan"<<endl;
    cout<<"2. Menu Minuman"<<endl;
    cout<<"3. Menu Dessert"<<endl;
    //tampilan untuk input dari user untuk memilih kategori menu
    cout<<"Masukkan Pilihan (Contoh : 0)\t: ";cin>>kategoriMenu;
    //user menginput pilihan kategori menu
    switch(kategoriMenu){
        
        //case 1 untuk makanan
        case 1:
        cout<<"\n = Menu Makanan = "<<endl<<endl;
        //tampilan menu
        cout<<"1) Burger\t IDR "<<hargaBurger<<endl;
        cout<<"2) French fries\t IDR "<<hargaFries<<endl;
        cout<<"3) Pasta\t IDR "<<hargaPasta<<endl;
        cout<<"Masukkan Pilihan menu (Contoh: 0)\t: ";cin>>pilih;
        cout<<"\nKuantitas Pesanan\t: ";cin>>kuantitas;
        cout<<"\nApakah Anda Memiliki Voucher (y/n)\t: ";cin>>pilihMenu;
        //penggunaan if else untuk validasi voucher
        if(pilihMenu=='y'){
            cout<<"\nMasukkan kode voucher\t: ";cin>>kodeVoucher;
            if(kodeVoucher=="mknhmt"){
                cout<<"\nSelamat Anda Berhasil Mendapatkan Diskon Voucher 20%\n";
                kodeVoucher="valid";
            }else{cout<<"Kode Tidak Valid\n";kodeVoucher="tidak valid";}
        }
        cout<<endl;
        //tampilan nota untuk bagian menu makanan
        cout<<" == NOTA PEMBELIAN == "<<endl<<endl;
        switch(pilih){
            case 1: 
            cout<<"Menu\t\t: Burger\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaBurger;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
            case 2: 
            cout<<"Menu\t\t: French fries\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaFries;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
            case 3: 
            cout<<"Menu\t\t: Pasta\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaPasta;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
        }
        break;
        
        //case 2 untuk minuman
        case 2:
        cout<<"\n = Menu Minuman = "<<endl<<endl;
        cout<<"1) Espresso\t IDR "<<hargaEspresso<<endl;
        cout<<"2) Cappucino\t IDR "<<hargaCappucino<<endl;
        cout<<"3) Latte\t IDR "<<hargaLatte<<endl;
        //input user untuk memilih menu minuman
        cout<<"Masukkan Pilihan menu (Contoh: 0)\t: ";cin>>pilih;
        cout<<"\nKuantitas Pesanan\t: ";cin>>kuantitas;
        cout<<"\nApakah Anda Memiliki Voucher (y/n)\t: ";cin>>pilihMenu;
        //if else untuk validasi voucher
        if(pilihMenu=='y'){
            cout<<"\nMasukkan kode voucher\t: ";cin>>kodeVoucher;
            if(kodeVoucher=="mknhmt"){
                cout<<"\nSelamat Anda Berhasil Mendapatkan Diskon Voucher 20%\n";
                kodeVoucher="valid";
            }else{cout<<"Kode Tidak Valid\n";kodeVoucher="tidak valid";}
        }
        cout<<endl;
        //tampilan nota untuk bagian menu minuman
        cout<<" == NOTA PEMBELIAN == "<<endl<<endl;
        switch(pilih){
            case 1: 
            cout<<"Menu\t\t: Espresso\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaEspresso;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
            case 2: 
            cout<<"Menu\t\t: Cappucino\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaCappucino;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
            case 3: 
            cout<<"Menu\t\t: Latte\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaLatte;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
        }
        break;
        
        //case 3 untuk dessert
        case 3:
        cout<<"\n = Menu Dessert = "<<endl<<endl;
        cout<<"1) Macaron\t IDR "<<hargaMacaron<<endl;
        cout<<"2) Tiramisu\t IDR "<<hargaTiramisu<<endl;
        cout<<"3) Cheesecake\t IDR "<<hargaCheesecake<<endl;
        //input user untuk memilih menu
        cout<<"Masukkan Pilihan menu (Contoh: 0)\t: ";cin>>pilih;
        cout<<"\nKuantitas Pesanan\t: ";cin>>kuantitas;
        cout<<"\nApakah Anda Memiliki Voucher (y/n)\t: ";cin>>pilihMenu;
        //if else untuk validasi voucher
        if(pilihMenu=='y'){
            cout<<"\nMasukkan kode voucher\t: ";cin>>kodeVoucher;
            if(kodeVoucher=="mknhmt"){
                cout<<"\nSelamat Anda Berhasil Mendapatkan Diskon Voucher 20%\n";
                kodeVoucher="valid";
            }else{cout<<"Kode Tidak Valid\n";kodeVoucher="tidak valid";}
        }
        cout<<endl;
        //tampilan nota untuk bagian menu dessert
        cout<<" == NOTA PEMBELIAN == "<<endl<<endl;
        switch(pilih){
            case 1: 
            cout<<"Menu\t\t: Macaron\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaMacaron;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
            case 2: 
            cout<<"Menu\t\t: Tiramisu\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaTiramisu;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
            case 3: 
            cout<<"Menu\t\t: Chesecake\n";
             //assignment untuk variabel operasi hitung harga
            totalHarga  =   kuantitas*hargaCheesecake;
            hargaDiskon =   totalHarga*0.2;
            //tampilan nota:kuantitas;total harga;diskon;harga akhir
            cout<<"Kuantitas\t: "<<kuantitas<<endl;
            cout<<"Total Harga\t: "<<totalHarga<<endl;
            if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
            else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
            cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
            cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
            break;
        }
        break;
    }
    return 0;
}