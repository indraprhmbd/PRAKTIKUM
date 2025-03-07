#include <iostream>
using namespace std;

int binary_search(int num[], int l, int r, int target) {
    if (l > r) return -1; // Basis rekursi, jika tidak ditemukan
    int mid = l + (r - l) / 2; // Hindari overflow dengan cara ini
    if (num[mid] == target) return mid; // Jika target ditemukan
    if (num[mid] > target) return binary_search(num, l, mid - 1, target); // Cari di kiri
    return binary_search(num, mid + 1, r, target); // Cari di kanan
}

int main() {
    int num[] = {11,25,37,43,51,65,75,82,98,106};
    int size = sizeof(num) / sizeof(int); // Hitung ukuran array
    int target;
    cout << "Target: ";
    cin >> target;
    int result = binary_search(num, 0, size - 1, target);
    if (result != -1) cout << "Ditemukan! Pada index ke: " << result << endl;
    else cout << "Data tidak ditemukan!" << endl;
    return 0;
}
