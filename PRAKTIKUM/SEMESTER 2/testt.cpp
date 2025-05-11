#include <iostream>
using namespace std;
struct tes{
    char nama[5];
};

int main(){
    tes data[2];
    cout<<"Nama : ";
    cin.ignore();
    cin.getline(data[0].nama,);
    cout<<"Nama : "<<data[0].nama<<endl;
}