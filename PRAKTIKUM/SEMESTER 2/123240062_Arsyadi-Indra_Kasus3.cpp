
//diambil dari https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/
//mohon maaf apabila penjelasan kurang baik

    // C++ recursive function to
    // solve tower of hanoi puzzle
    #include <bits/stdc++.h>
    using namespace std;
    
    void towerOfHanoi(int n, char from_rod, char to_rod,char aux_rod)
    {

        //kondisi terminasi/basis
        //ketika n==0 atau disk 0, maka prosedur ini mengembalikan nilai null
        if (n == 0) {
            return;
        }

        //fungsi rekursif dipanggil dengan parameter to_rod ditukar dengan aux_rod
        towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
        //memindahkan disk yang berada diatasnya ke to_rod
        cout << "Move disk " << n << " from rod " << from_rod
            << " to rod " << to_rod << endl;
        //fungsi rekursif dipanggil dengan parameter aux_rod dipindah paling depan,
        //to_rod di tengah, dan from_rod ke paling belakang
        towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
    }

    // Driver code
    int main()
    {
        //Jumlah cakram
        int N = 6;

        // A, B and C are names of rods
        towerOfHanoi(N, 'A', 'C', 'B');
        return 0;
    }

    // This is code is contributed by rathbhupendra
