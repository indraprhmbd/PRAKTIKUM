#include <iostream>
using namespace std;

int main() {
    int baris, kolomA, kolomB;

    // Input jumlah baris dan kolom matriks A dan B
    cout << "Masukkan Jumlah Baris Matriks A dan B : ";
    cin >> baris; // Jumlah baris Matriks A
    cout << "Masukkan Jumlah Kolom Matriks A       : ";
    cin >> kolomA; // Jumlah kolom Matriks A
    cout << "Masukkan Jumlah Kolom Matriks B       : ";
    cin >> kolomB; // Jumlah kolom Matriks B (Kolom matriks A harus sama dengan baris matriks B)

    // Matriks A dan B
    int A[baris][kolomA], B[kolomA][kolomB];

    // Input nilai Matriks A
    cout << "Masukkan nilai Matriks A\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolomA; j++) {
            cout << "[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    // Input nilai Matriks B
    cout << "Masukkan nilai Matriks B\n";
    for (int i = 0; i < kolomA; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << "[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    // Menampilkan Matriks A dan B
    cout << "Tampilan Matriks\n";
    cout << "A : ";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolomA; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "B : ";
    for (int i = 0; i < kolomA; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // Matriks hasil perkalian
    int C[baris][kolomB];
    
    // Perkalian Matriks A dan B
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolomB; j++) {
            C[i][j] = 0; // Inisialisasi elemen hasil perkalian
            for (int k = 0; k < kolomA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Menampilkan hasil perkalian Matriks A dan B
    cout << "Hasil Perkalian Matriks A dan B\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}