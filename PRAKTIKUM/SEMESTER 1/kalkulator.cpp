#include <iostream>
using namespace std;
float a, b;
char menu;
void input();
float jumlah(float x, float y);
float kurang(float x, float y);
float kali(float x, float y);
float bagi(float x, float y);

int main()
{
    int pilih;
    do
    {
        system("cls");
        cout << "===KALKULATOR===" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "pilih : ";
        cin >> pilih;
        cout << endl;
        input();
        switch (pilih)
        {
        case 1:
            cout << jumlah(a, b);
            break;
        case 2:
            cout << kurang(a, b);
            break;
        case 3:
            cout << kali(a, b);
            break;
        case 4:
            cout << bagi(a, b);
            break;
        }
        cout << endl
             << "ulang? (y/t): ";
        cin >> menu;
    } while (menu == 'y' && pilih < 5);
}
void input()
{
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
}
float jumlah(float x, float y)
{
    return x + y;
}
float kurang(float x, float y)
{
    return x - y;
}
float kali(float x, float y)
{
    return x * y;
}
float bagi(float x, float y)
{
    return x / y;
}