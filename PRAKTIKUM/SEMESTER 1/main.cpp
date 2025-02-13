#include <iostream>
using namespace std;

int main(){
    system("cls");
    int nim,nama,sksPil,sksTotal,sksD,sksE,semester;
    float ipk; string valid;
    cout<<"== INPUT DATA ==\n";
    cout<<"\nNIM\t: ";cin>>nim;
    cout<<"\nNIM\t: ";cin>>nim;
    cout<<"\nNIM\t: ";cin>>nim;
    cout<<"\nNIM\t: ";cin>>nim;
    
    
    if(ipk>= 2.25 && sksTotal>=144 && sksPil>=15 && sksD<=sksTotal*0.25 && sksE==0)valid="lulus";
    else {valid="tidak lulus";cout<<"\nMohon maaf anda belum lulus";
    if(valid=="lulus"){
        if(ipk>=3.51 && semester<=8){
            valid="cumlaude";
            cout<<"Dengan Pujian (Cumlaude)";
        }else if((ipk<=3.50 && ipk>=3.01)|| ( ipk>=3.51 && semester>8 ))cout<<"Sangat Memuaskan (Very Satisfactory)";
        else if(ipk>=2.76 && ipk<=3.00)cout<<"Memuaskan (Satisfactory)";
    }
    if(valid=="cumlaude")cout<<"\nDiusulkan mendapatkan Karya Cendikia";
}
}