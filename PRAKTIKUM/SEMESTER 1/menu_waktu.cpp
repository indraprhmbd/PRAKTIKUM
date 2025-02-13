#include <iostream>
using namespace std;

int main(){
    string waktu[4] = {"12.15", "14.20", "16.25", "18.30"};
    int pilihan;
    cout << "Pilih waktu\n";
    for(int i = 0; i < 4; i++){
        cout << i + 1 << ". "<< waktu[i] << "\n";
    }
    cout << "\nSilahkan Pilih Jam : "; 
    cin >> pilihan;
    switch (pilihan){
        case 1 : 
        cout << waktu[0] << endl;
        break;
        case 2 : 
        cout << waktu[1] << endl;
        break;
        case 3 : 
        cout << waktu[2] << endl;
        break;
        case 4 : 
        cout << waktu[3] << endl;
        break;
        default :
        cout << "Pilihan tidak valid";
        break;      
    }
}