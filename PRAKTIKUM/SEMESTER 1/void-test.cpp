#include <iostream>
using namespace std;

void inputMahasiswa();
int main()
{
    cout << "INPUT DATA MAHASISWA" << endl;
    inputMahasiswa();
    system("pause");
}
void inputMahasiswa()
{
    int nim;
    string nama;
    cout << "Masukkan NIM : ";
    cin >> nim;
    cout << "Masukkan Nama : ";
    cin.ignore();
    getline(cin, nama);
    cout << "Nama Anda : " << nama << " dengan NIM : " << nim << endl;
}