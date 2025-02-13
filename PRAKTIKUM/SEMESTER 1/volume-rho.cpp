#include <iostream> 
#include <iomanip>
using namespace std;
void rho(double ab){
    char pilih;
    do{
        double hasil;
        double celcius;
        double rho;
        system("cls");
        cout<<"Masukkan Suhu Air (Celcius): ";cin>>celcius;
// Assume celcius has been set to a value somewhere in your code
        if (celcius >= 25 && celcius < 26) {
            rho = 997.045;
        } else if (celcius >= 26 && celcius < 27) {
            rho = 996.783;
        } else if (celcius >= 27 && celcius < 28) {
            rho = 996.513;
        } else if (celcius >= 28 && celcius < 29) {
            rho = 996.233;
        } else if (celcius >= 29 && celcius < 30) {
            rho = 995.945;
        } else if (celcius >= 30 && celcius < 31) {
            rho = 995.647;
        } else if (celcius >= 31 && celcius < 32) {
            rho = 995.341;
        } else if (celcius >= 32 && celcius < 33) {
            rho = 995.026;
        } else if (celcius >= 33 && celcius < 34) {
            rho = 994.703;
        } else if (celcius >= 34 && celcius < 35) {
            rho = 994.371;
        } else if (celcius >= 35 && celcius < 36) {
            rho = 994.032;
        } else if (celcius >= 36 && celcius < 37) {
            rho = 993.684;
        } else if (celcius >= 37 && celcius < 38) {
            rho = 993.328;
        } else if (celcius >= 38 && celcius < 39) {
            rho = 992.965;
        } else if (celcius >= 39 && celcius < 40) {
            rho = 992.594;
        } else if (celcius >= 40 && celcius < 41) {
            rho = 992.215;
        } else if (celcius >= 41 && celcius < 42) {
            rho = 991.830;
        } else if (celcius >= 42 && celcius < 43) {
            rho = 991.436;
        } else if (celcius >= 43 && celcius < 44) {
            rho = 991.036;
        } else if (celcius >= 44 && celcius < 45) {
            rho = 990.628;
        } else if (celcius >= 45 && celcius < 46) {
            rho = 990.213;
        } else if (celcius >= 46 && celcius < 47) {
            rho = 989.792;
        } else if (celcius >= 47 && celcius < 48) {
            rho = 989.363;
        } else if (celcius >= 48 && celcius < 49) {
            rho = 988.928;
        } else if (celcius >= 49 && celcius < 50) {
            rho = 988.485;
        } else if (celcius >= 50 && celcius < 51) {
            rho = 988.037;
        } else if (celcius >= 51 && celcius < 52) {
            rho = 987.581;
        } else if (celcius >= 52 && celcius < 53) {
            rho = 987.120;
        } else if (celcius >= 53 && celcius < 54) {
            rho = 986.652;
        } else if (celcius >= 54 && celcius < 55) {
            rho = 986.177;
        } else if (celcius >= 55 && celcius < 56) {
            rho = 985.696;
        } else if (celcius >= 56 && celcius < 57) {
            rho = 985.219;
        } else if (celcius >= 57 && celcius < 58) {
            rho = 984.716;
        } else if (celcius >= 58 && celcius < 59) {
            rho = 984.217;
        } else if (celcius >= 59 && celcius < 60) {
            rho = 983.712;
        } else if (celcius >= 60 && celcius < 61) {
            rho = 983.200;
        } else if (celcius >= 61 && celcius < 62) {
            rho = 982.683;
        } else if (celcius >= 62 && celcius < 63) {
            rho = 982.160;
        } else if (celcius >= 63 && celcius < 64) {
            rho = 981.631;
        } else if (celcius >= 64 && celcius < 65) {
            rho = 981.097;
        } else if (celcius >= 65 && celcius < 66) {
            rho = 980.557;
        } else if (celcius >= 66 && celcius < 67) {
            rho = 980.011;
        } else if (celcius >= 67 && celcius < 68) {
            rho = 979.459;
        } else if (celcius >= 68 && celcius < 69) {
            rho = 978.902;
        } else if (celcius >= 69 && celcius < 70) {
            rho = 978.339;
        } else {
            // Handle case where temperature is out of range
            rho = -1; // or any indication of an invalid input
        }
        hasil=rho/1000*ab;
        cout<<"rho : "<<rho<<endl;
        cout<<"Hasil ("<<ab<<")("<<rho/1000<<"): "<<setprecision(7)<<hasil<<endl;
        cout<<"ulang menu (y/t) : ";cin>>pilih;
    }while(pilih!='t');
}

int main(){
    int menu;
    double a=350,b=400;
    cout<<"1. Volume 350"<<endl;
    cout<<"2. Volume 400"<<endl;
    cout<<"pilih : ";cin>>menu;
    switch(menu){
        case 1:
        rho(a);
        break;
        case 2:
        rho(b);
        break;
    }    
}