#include <iostream>
// #include <stdlib.h>
using namespace std;
int main(){
    int i=0;
    string user,pass;
    // do{
    //     system("cls");
    //     if(i==3)
    //     cout<<"Masukkan Username : ";cin>>user;
    //     cout<<"Masukkan Password : ";cin>>pass;
    //     if(user!="arsya"|| pass!="123240062"){cout<<"User atau Password Salah!"<<endl;system("pause");}
    //     i++;
    // }while(i<3 || (user!="arsya" && pass!="123240062"));
    // if(user=="arsya")cout<<"benar\n";
    // return 0;
    if(i==0){
    cout<<"Masukkan Username : ";cin>>user;
    cout<<"Masukkan Password : ";cin>>pass;
    }

    while(i<=3 && (user!="arsya" || pass!="123240062")){
         system("cls");
        cout<<"Masukkan Username : ";cin>>user;
        cout<<"Masukkan Password : ";cin>>pass;
        if(user!="arsya"|| pass!="123240062")cout<<"User atau Password Salah!"<<endl;
        if(i==3){cout<<"Coba Lagi Nanti\n";system("pause");system("exit");}
        i++;
    }
    if(user=="arsya"&&pass=="123240062"){
        cout<<"Username dan Password Benar"<<endl;
    }
    system("exit");
}
// int main(){
//     system("cls");
//     //deklarasi variabel
//     int nim,sksPil,sksTotal,sksD,sksE,semester;
//     float ipk; string valid,nama;

//     //Output tampilan dan input variabel
//     cout<<"== INPUT DATA ==\n";
//     cout<<"\nNIM\t: ";cin>>nim;
//     cout<<"\nNama\t: ";cin.ignore();getline(cin,nama);
//     cout<<"\nTotal SKS\t: ";cin>>sksTotal;
//     cout<<"\nIPK\t: ";cin>>ipk;
//     cout<<"\nTotal SKS Pilihan\t: ";cin>>sksPil;
//     cout<<"\nJumlah Nilai D\t: ";cin>>sksD;
//     cout<<"\nJumlah Nilai E\t: ";cin>>sksE;
//     cout<<"\nLama lulus\t: ";cin>>semester;
    
//     //pengendalian output dengan if else statement
//     if(ipk>= 2.25 && sksTotal>=144 && sksPil>=15 && sksD<=sksTotal*0.25 && sksE==0)valid="lulus";
//     else {valid="tidak lulus";cout<<"\nMohon maaf kamu belum lulus";}
//     cout<<"\n=== DATA KELULUSAN ===";
//     cout<<"\nNama\t\t: "<<nama;
//     cout<<"\nNim\t\t: "<<nim;
//     cout<<"\nPredikat\t: ";
//     if(valid=="lulus"){
//         if(ipk>=3.51 && semester<=8){
//             valid="cumlaude";
//             cout<<"Dengan Pujian (Cumlaude)";
//         }else if((ipk<=3.50 && ipk>=3.01)||( ipk>=3.51 && semester>8 ))cout<<"Sangat Memuaskan (Very Satisfactory)";
//         else if(ipk>=2.76 && ipk<=3.00)cout<<"Memuaskan (Satisfactory)";
//     }
//     if(valid=="cumlaude")cout<<"\n\nDiusulkan mendapatkan Karya Cendikia";
// }