#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    const int max_data=100;
    int bil[max_data]={0};
    int menu;
    FILE *fp;
    fp=fopen("nilai.txt","w");
    if(fp==NULL){
        printf("Error!");
        exit(1);
    }
    cout<<"Input Berapa Kali : ";cin>>menu;
    for(int i=0;i<menu;i++){
        printf("Masukkan bilangan : ");
        scanf("%d", &bil[i]);
        fprintf(fp,"\nnilai : %d",bil[i]);
    }
    cout<<"Bilangan :";
    for(int i=0;i<menu;i++){
        cout<<" "<<bil[i]<<",";
    }
    fclose(fp);
}