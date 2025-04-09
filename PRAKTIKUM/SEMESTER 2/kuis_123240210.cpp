#include <iostream>
using namespace std;

int i = 0;
int jmlBuku = 0;
struct data{
    int idBuku;
    string judul;
    string namaPenulis;
    string namaPenerbit;
    int tahunTerbit;
} buku[999];

void dataBuku();void tampil();void searching();void faktorial();void sequential();void binary();int rumusFaktorial(int a);

main(){
    int pil;
    cout << "=== Program Perpustakaan ===\n[1] Masukkan Data Buku\n[2] Menampilkan Data Buku\n[3] Mencari Data Buku\n[4] Program Faktorial\n[0] Exit Program";
    cout << "\nPilihan\t: ";
    cin >> pil;

    switch (pil){
    case 1:
        dataBuku();
        break;
    case 2:
        tampil();
        break;
    case 3:
        searching();
        break;
    case 4:
        faktorial();
    case 0:
        cout<<"|P r o g r a m  S e l e s a i|\n|T e r i m a k a s i h|";
        break;
    default:
        cout << "\nPilih dengan benar\n";
        cout << "=================================\n";
        system("pause");
        system("cls");
        main();
        break;
    }
}

void dataBuku(){
    system("cls");
    int temp;
    cout << "=== Masukkan Data Buku ===\nJumlah buku yang dimasukkan\t: ";
    cin >> temp;
    jmlBuku = jmlBuku + temp;
    for (i; i < jmlBuku; i++){
        cout << "\nData buku ke-" << i + 1; buku[i].idBuku = i + 1;
        cout << "\nJudul\t\t: "; getline(cin >> ws, buku[i].judul);
        cout << "Penulis\t\t: "; getline(cin >> ws, buku[i].namaPenulis);
        cout << "Penerbit\t: "; getline(cin >> ws, buku[i].namaPenerbit);
        cout << "Tahun terbit\t: "; cin >> buku[i].tahunTerbit;
    }

    cout << "\nBerhasil menambahkan data\n";
    cout << "=================================\n";
    system("pause");system("cls");main();
}

void tampil(){
    system("cls");
    if (jmlBuku > 0){
        cout << "=== Menampilkan Data Buku ===";
        for (int j = 0; j < jmlBuku; j++)
        {
            cout << "\n\nData buku ke-" << buku[j].idBuku;
            cout << "\nJudul\t\t: " << buku[j].judul;
            cout << "\nPenulis\t\t: " << buku[j].namaPenulis;
            cout << "\nPenerbit\t: " << buku[j].namaPenerbit;
            cout << "\nTahun terbit\t: " << buku[j].tahunTerbit;
        }
        cout << "\nBerhasil menampilkan data\n";
    }
    else{
        cout << "\n|D A T A  M A S I H  K O S O N G|\n";
    }
    cout << "=================================\n";
    system("pause");system("cls");main();
}

void searching(){
    system("cls");
    int pil;
    cout << "=== Mencari Data Buku ===\nMetode :\n[1] Sequential\n[2] Binary\nPilihan\t: ";
    cin >> pil;
    switch (pil){
    case 1:
        sequential();
        break;
    case 2:
        binary();
        break;
    default:
        cout << "\nPilih dengan benar\n";
        cout << "=================================\n";
        system("pause");system("cls");main();
        break;
    }
}

void sequential(){
    system("cls");
    string temp;
    int j = 0;
    bool found = false;
    cout << "=== Sequential Search ===\n\nMasukkan judul buku\t: ";
    getline(cin >> ws, temp);
    while (j < jmlBuku){
        if (temp == buku[j].judul){
            cout << "\nData buku ke-" << buku[j].idBuku;
            cout << "\nJudul\t: " << buku[j].judul;
            cout << "\nPenulis\t: " << buku[j].namaPenulis;
            cout << "\nPenerbit\t: " << buku[j].namaPenerbit;
            cout << "\nTahun terbit\t: " << buku[j].tahunTerbit;
            found = true;
            break;
        }else{
            j++;
        }
    }
    if (found){
        cout << "\nData buku Ditemukan\n=================================\n";
        system("pause");
        system("cls");
        main();
    }else{
        cout << "\nData buku tidak ditemukan\n=================================\n";
        system("pause");
        system("cls");
        main();
    }
}

void binary(){
    system("cls");
    int temp;
    bool found = false;
    cout << "=== Binary Search ===\n\nMasukkan id buku\t: ";
    cin >> temp;
    int a = 0;
    int ak = jmlBuku;
    int t = (a + ak) / 2;
    while (t >= 1){
        if (temp == buku[t].idBuku){
            cout << "\nData buku ke-" << buku[t].idBuku;
            cout << "\nJudul\t: " << buku[t].judul;
            cout << "\nPenulis\t: " << buku[t].namaPenulis;
            cout << "\nPenerbit\t: " << buku[t].namaPenerbit;
            cout << "\nTahun terbit\t: " << buku[t].tahunTerbit;
            found = true;
            break;
        }else if (temp < buku[t].idBuku){
            ak = t - 1;
            t = (a + ak) / 2;
        }else if (temp > buku[t].idBuku){
            ak = t - 1;
            t = (a + ak) / 2;
        }
        if (!found && t == 1) break;
    }
    if (found){
        cout << "\nData buku Ditemukan\n=================================\n";
        system("pause");
        system("cls");
        main();
    }else{
        cout << "\nData buku tidak ditemukan\n=================================\n";
        system("pause");system("cls");main();
    }
}

void faktorial(){
    system("cls");
    int n;
    cout << "=== Program Menghitung Faktorial ===\nMenghitung n!\nMasukkan nilai n\t: ";
    cin >> n;
    cout << "Hasil dari " << n << "!\t: " << rumusFaktorial(n);
    cout << "\n=================================\n";
    system("pause");system("cls");main();
}

int rumusFaktorial(int a){
    if (a == 0) return 1;
    else return a * rumusFaktorial(a - 1);
}