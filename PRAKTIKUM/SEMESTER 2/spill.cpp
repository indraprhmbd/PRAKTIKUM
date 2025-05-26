#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Struktur data untuk menyimpan informasi
struct Data {
    string judul;
    string penulis;
    string isi;
};

// Struktur untuk menyimpan data yang akan diurutkan
struct DataUrut {
    string judul;
    string penulis;
};

// Nama file untuk menyimpan data
string nama_file = "data.txt";

// =================== FUNGSI PENGURUTAN BUBBLE SORT ===================
void bubbleSort(DataUrut arr[], int n) {
    // Implementasi bubble sort untuk mengurutkan data berdasarkan judul
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Ubah kedua string menjadi lowercase untuk perbandingan
            string judul1 = arr[j].judul;
            string judul2 = arr[j + 1].judul;
            
            // Konversi ke lowercase
            for(char& c : judul1) c = tolower(c);
            for(char& c : judul2) c = tolower(c);
            
            // Jika judul1 lebih besar dari judul2, tukar posisinya
            if (judul1 > judul2) {
                DataUrut temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// =================== CARA MENAMPILKAN DATA TERURUT ===================
void tampilkanDataUrut() {
    // 1. Buka file dan hitung jumlah data
    ifstream file(nama_file);
    if (!file.is_open()) {
        cout << "File tidak dapat dibuka" << endl;
        return;
    }

    string baris;
    int jumlahData = 0;
    
    // Hitung jumlah data yang ada
    while (getline(file, baris)) {
        if (baris == "<<==START==>>") {
            jumlahData++;
        }
    }

    if (jumlahData == 0) {
        cout << "Tidak ada data yang tersimpan." << endl;
        file.close();
        return;
    }

    // 2. Buat array untuk menyimpan data yang akan diurutkan
    DataUrut* dataArray = new DataUrut[jumlahData];
    int index = 0;

    // 3. Baca ulang file dari awal
    file.clear();
    file.seekg(0);

    // 4. Baca semua data ke dalam array
    while (getline(file, baris)) {
        if (baris == "<<==START==>>") {
            string judulBaris, penulisBaris;
            getline(file, judulBaris);
            getline(file, penulisBaris);
            
            // Simpan data ke array (tanpa label)
            dataArray[index].judul = judulBaris.substr(7);
            dataArray[index].penulis = penulisBaris.substr(9);
            index++;

            // Skip bagian isi sampai END
            while (getline(file, baris) && baris != "<<==END==>>") {}
        }
    }

    // 5. Urutkan array menggunakan bubble sort
    bubbleSort(dataArray, jumlahData);

    // 6. Tampilkan data yang sudah terurut
    cout << "\n===========================================" << endl;
    cout << "Daftar Data (Diurutkan berdasarkan Judul)" << endl;
    cout << "===========================================" << endl;
    
    for (int i = 0; i < jumlahData; i++) {
        cout << i + 1 << ". " << dataArray[i].judul << endl;
        cout << "   Penulis: " << dataArray[i].penulis << endl;
        cout << "-------------------------------------------" << endl;
    }

    // 7. Bersihkan memori
    delete[] dataArray;
    file.close();
}

// =================== CARA MENYIMPAN DATA MULTI-LINE ===================
void simpanData() {
    Data data;
    
    // 1. Menggunakan delimiter khusus untuk menandai awal dan akhir data
    // Contoh: "<<==START==>>" dan "<<==END==>>"
    // Ini membantu kita membedakan antara satu data dengan data lainnya
    
    cout << "Masukkan judul: ";
    getline(cin, data.judul);
    cout << "Masukkan penulis: ";
    getline(cin, data.penulis);
    
    // 2. Untuk input multi-line, gunakan karakter khusus sebagai penanda selesai
    cout << "Masukkan isi (Ketik '###' pada baris baru untuk mengakhiri):\n";
    string baris;
    data.isi = "";
    while (getline(cin, baris)) {
        if (baris == "###") break;
        data.isi += baris + "\n";
    }

    // 3. Menyimpan ke file dengan format yang terstruktur
    ofstream file(nama_file, ios::app);  // ios::app untuk menambahkan di akhir file
    if (file.is_open()) {
        file << "<<==START==>>\n";       // Penanda awal data
        file << "JUDUL: " << data.judul << "\n";
        file << "PENULIS: " << data.penulis << "\n";
        file << "ISI:\n" << data.isi;
        file << "<<==END==>>\n";         // Penanda akhir data
        file.close();
    }
}

// =================== CARA MENGHAPUS DATA ===================
void hapusData() {
    // 1. Tampilkan daftar data yang ada
    ifstream file(nama_file);
    if (!file.is_open()) return;

    string baris;
    int counter = 0;
    
    // 2. Baca dan tampilkan semua data dengan nomor urut
    while (getline(file, baris)) {
        if (baris == "<<==START==>>") {
            string judulBaris, penulisBaris;
            getline(file, judulBaris);    // Baca judul
            getline(file, penulisBaris);  // Baca penulis
            
            // Ambil judul dan penulis (hapus label)
            string judul = judulBaris.substr(7);
            string penulis = penulisBaris.substr(9);
            
            counter++;
            cout << counter << ". " << judul << " - " << penulis << endl;
            
            // Skip sampai akhir data ini
            while (getline(file, baris) && baris != "<<==END==>>") {}
        }
    }

    // 3. Minta input nomor data yang akan dihapus
    cout << "Masukkan nomor yang akan dihapus: ";
    int nomor;
    cin >> nomor;
    
    // 4. Teknik menghapus: Salin semua data kecuali yang akan dihapus ke file temporary
    file.clear();           // Reset status file
    file.seekg(0);         // Kembali ke awal file
    
    ofstream tempFile("temp.txt");
    counter = 0;
    
    // 5. Proses penyalinan data
    while (getline(file, baris)) {
        if (baris == "<<==START==>>") {
            counter++;
            if (counter == nomor) {
                // Jika ini data yang mau dihapus, skip sampai akhir data ini
                while (getline(file, baris) && baris != "<<==END==>>") {}
                continue;  // Lanjut ke data berikutnya
            }
            // Jika bukan yang mau dihapus, salin data ini
            tempFile << baris << endl;  // Salin penanda awal
            while (getline(file, baris) && baris != "<<==END==>>") {
                tempFile << baris << endl;  // Salin isi data
            }
            tempFile << baris << endl;  // Salin penanda akhir
        }
    }

    // 6. Tutup kedua file
    file.close();
    tempFile.close();

    // 7. Ganti file asli dengan file temporary
    remove(nama_file.c_str());              // Hapus file asli
    rename("temp.txt", nama_file.c_str());  // Rename file temporary
}

// Fungsi utama untuk testing
int main() {
    int pilihan;
    while (true) {
        cout << "\n1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Tampilkan Data Terurut\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: simpanData(); break;
            case 2: hapusData(); break;
            case 3: tampilkanDataUrut(); break;
            case 0: return 0;
        }
    }
}