#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int baris,kolom,maks,hasilKali,counter=0;
    system("cls");
    cout<<"Maks : ";cin>>maks;
    for(baris=1;baris<=maks;baris++){
        for(kolom=1;kolom<=maks;kolom++){
            hasilKali=baris*kolom;
            cout<<setw(3)<<hasilKali;
            counter++;
        }
        cout<<endl;
    }
    int i=0;
    cout<<"total : "<<counter<<endl;
    
    for(int i=counter;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    int trans,item,brpTrans,brpItem;
    float harga,total;
    cout<<"Berapa Transaksi : ";cin>>brpTrans;
    for(trans=1;trans<=brpTrans;trans++){
        total=0;
        cout<<"Transaksi ke - "<<trans<<endl;
        cout<<"Berapa Item : ";cin>>brpItem;
        for(item=1;item<=brpItem;item++){
            cout<<"input harga item ke-"<<item<<": ";cin>>harga;
            total+=harga;
        }

        cout<<"total untuk transaksi ke-"<<trans<<": "<<total<<endl<<endl;
    }
}