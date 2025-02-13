#include <iostream>
using namespace std;

int faktorial(int n){
    if(n==1) return 1;
    else return (n*faktorial(n-1));
}

int fibonacci(int n){
    if(n<=1) return n;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int angka;
    cout<<"Input angka : ";cin>>angka;
    cout<<"Faktorialnya adalah : "<<faktorial(angka)<<endl;
    cout<<"elemen ke : ";cin>>angka;
    cout<<fibonacci(angka);
}

// #include <iostream>
// #include <climits>

// int main() {
//     unsigned long long int a = 0, b = 1;
    
//     std::cout << "Fibonacci Sequence up to the max value of unsigned long long int:\n";
//     std::cout << a << ", " << b;

//     while (true) {
//         unsigned long long int next = a + b;

//         // Check if the next Fibonacci number will exceed the max value of unsigned long long int
//         if (next < a) { // Overflow detected
//             break;
//         }

//         std::cout << ", " << next;
//         a = b;
//         b = next;
//     }
    
//     std::cout << "\nReached maximum value for unsigned long long int.\n";
//     return 0;
// }
