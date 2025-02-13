#include <iostream>
using namespace std;
void lingkaran();
void ganjilGenap();
float keliling(float r);
float luas(float r);
int pilih;
int main()
{
    char menu;
    do
    {
        system("cls");
        cout << "MENU" << endl;
        cout << "1. Lingkaran" << endl;
        cout << "2. Ganjil/Genap" << endl;
        cout << "pilih : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            lingkaran();
            break;
        case 2:
            ganjilGenap();
            break;
        }
        cout << endl
             << "ulang? (y/t) : ";
        cin >> menu;
    } while (menu == 'y');
}

void lingkaran()
{
    float r, hasil;
    cout << "1. Keliling" << endl;
    cout << "2. Luas" << endl;
    cout << "pilih : ";
    cin >> pilih;
    cout << "Masukkan Jari-jari : ";
    cin >> r;
    switch (pilih)
    {
    case 1:
        cout << keliling(r) << " cm" << endl;
        break;
    case 2:
        cout << luas(r) << " cm^2" << endl;
        break;
    }
}
float keliling(float r)
{
    return 2 * 3.14 * r;
}
float luas(float r)
{
    return 3.14 * r * r ;
}

void ganjilGenap()
{
    int bilangan;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if (bilangan % 2 == 0)
    {
        cout << "Bilangan " << bilangan << " adalah genap";
    }
    else
    {
        cout << "Bilangan " << bilangan << " adalah ganjil";
    }
}
