#include <iostream>
//#include <vector>
//#include <string>
using namespace std;
void uppercase(string s){
    for(char nama:s){
        if(nama>90) nama-=32;
        cout<<nama<<" ";
    }
}
void lowercase(string s){
    for(char nama : s){
            if(nama>=65 && nama<=90) nama+=32;
            cout<<nama<<" ";
        }
}

int main(){
    string s="Namaku Arsyadi Indra Hasan Prihambada";
    uppercase(s); cout<<endl;
    lowercase(s);
}