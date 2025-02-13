#include <iostream>
using namespace std;

int main(){
    //deklarasi variabel
    int kategoriMenu,pilih,kuantitas,hargaDiskon,totalHarga;
    char pilihMenu;string kodeVoucher;
    //penggunaan array untuk harga
    int harga[3][3] = {
    //burger,frenchfries,pasta
        {20000,10000,25000}, //makanan
    //espresso,Cappucino,Latte
        {20000,20000,15000}, //minuman
    //Macaron,Tiramisu,Chesecake
        {20000,20000,15000} //desssert
    };
    
    system("cls");
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
        cout<<"1) Burger\t IDR "<<harga[kategoriMenu-1][0]<<endl;
        cout<<"2) French fries\t IDR "<<harga[kategoriMenu-1][1]<<endl;
        cout<<"3) Pasta\t IDR "<<harga[kategoriMenu-1][2]<<endl;
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
            break;
            case 2: 
            cout<<"Menu\t\t: French fries\n";
            break;
            case 3: 
            cout<<"Menu\t\t: Pasta\n";
            break;
        }
        break;
        
        //case 2 untuk minuman
        case 2:
        cout<<"\n = Menu Minuman = "<<endl<<endl;
        cout<<"1) Espresso\t IDR "<<harga[kategoriMenu-1][0]<<endl;
        cout<<"2) Cappucino\t IDR "<<harga[kategoriMenu-1][1]<<endl;
        cout<<"3) Latte\t IDR "<<harga[kategoriMenu-1][2]<<endl;
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
            break;
            case 2: 
            cout<<"Menu\t\t: Cappucino\n";
            break;
            case 3: 
            cout<<"Menu\t\t: Latte\n";
            break;
        }
        break;
        
        //case 3 untuk dessert
        case 3:
        cout<<"\n = Menu Dessert = "<<endl<<endl;
        cout<<"1) Macaron\t IDR "<<harga[kategoriMenu-1][0]<<endl;
        cout<<"2) Tiramisu\t IDR "<<harga[kategoriMenu-1][1]<<endl;
        cout<<"3) Chesecake\t IDR "<<harga[kategoriMenu-1][2]<<endl;
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
            break;
            case 2: 
            cout<<"Menu\t\t: Tiramisu\n";
            break;
            case 3: 
            cout<<"Menu\t\t: Chesecake\n";
            break;
        }
        break;
    }
    
    //assignment untuk variabel operasi hitung harga
    totalHarga  =   kuantitas*harga[kategoriMenu-1][pilih-1];
    hargaDiskon =   totalHarga*0.2;
    //tampilan nota:kuantitas;total harga;diskon;harga akhir
    cout<<"Kuantitas\t: "<<kuantitas<<endl;
    cout<<"Total Harga\t: "<<totalHarga<<endl;
    if(kodeVoucher=="valid")cout<<"Diskon\t\t: "<<hargaDiskon<<endl;
    else if(pilihMenu=='n' || kodeVoucher=="tidak valid")hargaDiskon=0;
    cout<<"Harga Akhir\t: "<<totalHarga-hargaDiskon<<endl<<endl;
    cout<<" TERIMAKASIH TELAH MEMESAN! SELAMAT MENIKMATI! "<<endl;
}