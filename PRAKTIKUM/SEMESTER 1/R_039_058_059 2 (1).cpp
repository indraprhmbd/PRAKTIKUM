#include <iostream>
#include <fstream>
#include <string.h>
#include <unistd.h>
using namespace std;

typedef struct{
	string nama;
	string tujuan;
	int tanggal,bulan,tahun;
	int kursi;
}data;
	data final[100];
	
void input();
void output();
void mergingsambung();
void bubblesort();
void selection();
void shell();
void intertion();
void sequential();
void simpan();
void binarysearch();


int main(){
	data final[100];
	string p;
	bool pesan = true;
	int mode;
	while (pesan){
		cout << " revisi " << endl;
		cout << " - binary search" << endl;
		cout << " - file simpan sorting " << endl;
		cout << endl << endl;
        cout<<"===========================================\n";
        cout<<"    SELAMAT DATANG DI SUMANTO's AIRLINES\n";
        cout<<"===========================================\n";
        cout<<"Apa yang ingin anda lakukan hari ini ?\n";
        cout<<"1. input\n";
        cout<<"2. output\n";
        cout<<"3. searching" << endl;
        cout<<"4. sort" << endl;
        cout<<"5. merging" << endl;
        cout<<"6. ecit\n";
        cout<<"PILIHAN  = ";cin>>mode;
		if (mode == 1){
			input();
			system("cls");
		}else if(mode == 2){
			output();
			system("pause");
			system("cls");
		}else if(mode == 3){
			bool sert = true;
			int pil1;
			cout << "pilih metode searching " << endl;
			cout << "1. squential (nama)" << endl;
			cout << "2. binary (kursi)" << endl;
			cout << "pilih ! : ";cin>> pil1;
			cout << endl;
				if(pil1 == 1){
					sequential();
					system("pause");
					system("cls");
				}else if(pil1 == 2){
					binarysearch();
					system("pause");
					system("cls");
				}else{
					cout << "pilihan not found" << endl;
					system("pause");
					system("cls");
				}
		}else if(mode == 4){
			bool sort = true;
			int pil2;
			cout << "pilih metode searching " << endl;
			cout << "1. bubble (kursi)" << endl;
			cout << "2. selection (nama)" << endl;
			cout << "3. shell (tujuan)" << endl;
			cout << "4. intertion (nama)" << endl;
			cout << "pilih choise : ";cin>> pil2;
			cout << endl;
			cout << endl;
				if(pil2 == 1){
					bubblesort();
					system("pause");
					system("cls");
				}else if(pil2 == 2){
					selection();
					system("pause");
					system("cls");
				}else if(pil2 == 3){
					shell();
					system("pause");
					system("cls");	
				}else if(pil2 == 4){
					intertion();
					system("pause");
					system("cls");
				}else{
					cout << " not found" << endl;
					system("pause");
					system("cls");
				}
		}else if(mode == 5){
			mergingsambung();
			system("pause");
			system("cls");
		}else if(mode == 6){
			cout << "semoga hari menyenangkan sir eksero";
			system("pause");
		}else{
			cout << "pilih yang ada ada aja" << endl;
			system("pause");
			system("cls");
		}
	}
//	input();
//	output();
//	mergingsambung();
//	bubblesort();
//	selection();
//	shell();
//	intertion();
//	sequential();
//	simpan();
//	binarysearch();
}

void input(){
	string namaFile;
	cin.ignore();
	cout << "masukan nama file : ";getline (cin,namaFile);	
	ofstream myfile(namaFile, ios::app);
	
	cout << "masukan nama : ";getline(cin,final[0].nama);
	cout << "masukan tujuan : ";getline (cin,final[0].tujuan);
	cout << "masukan kursi : "; cin >> final[0].kursi;
	cout << "masukan tanggal : ";cin >>final[0].tanggal >> final[0].bulan >> final[0].tahun;
	

	myfile << "\n" << final[0].nama << "\n" << final[0].tujuan << "\n" << final[0].kursi << "\n" << final[0].tanggal << "\n" << final[0].bulan << "\n" << final[0].tahun << "\n";	
	
}

		

		



void  output(){
	int i = 1;
	string nggejrak;
	string namaFile;
	cout << "masukan nama file : ";cin >> namaFile;
	ifstream myfile(namaFile);
	while(getline(myfile,nggejrak)){
		getline(myfile, final[i].nama);
		getline(myfile, final[i].tujuan);
		myfile >> final[i].kursi >> final[i].tanggal >> final[i].bulan >> final[i].tahun;
		myfile.ignore();
		i++;
		}
	
	
		cout << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		cout << "| nama			| tujuan		| kursi			| tanggal			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
	for (int a = 1;a < i; a++){

		cout << "| " << final[a].nama << "			| " <<final[a].tujuan << "		| " << final[a].kursi << "			| " << final[a].tanggal << "/"<< final[a].bulan << "/" << final[a].tahun << "			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		/*
		cout << "masukan nama : " << final[a].nama << endl;
		cout << "masukan tujuan : " << final[a].tujuan << endl;
		cout << "masukan kursi : " << final[a].kursi << endl;
		cout << "masukan tanggal : " << final[a].tanggal << "/"<< final[a].bulan << "/" << final[a].tahun << endl;
		*/
	}
	cout << endl;
}



void mergingsambung(){
	data fa[100],fb[100];
	string file1,file2,file3;
	string nggejrak;	
	int a,b,c;
	cin.ignore();
	cout << "masukan nama file pertama : ";getline(cin,file1);
	cout << "masukan nama file kedua : ";getline(cin,file2);
	cout << "masukan nama file ketiga : ";getline(cin,file3);
	
	ifstream m1(file1);
		a=0;
		while(getline(m1,nggejrak)){
		getline(m1, fa[a].nama);
		getline(m1, fa[a].tujuan);
		m1 >> fa[a].kursi >> fa[a].tanggal >> fa[a].bulan >> fa[a].tahun;
		m1.ignore();
		a++;
		}
		
	ifstream m2(file2);
		b=0;
		while(getline(m2,nggejrak)){
		getline(m2, fb[b].nama);
		getline(m2, fb[b].tujuan);
		m2 >> fb[b].kursi >> fb[b].tanggal >> fb[b].bulan >> fb[b].tahun;
		m2.ignore();
		b++;
		}	
	ofstream m3(file3, ios::app);
	for (int k =0;k<a;k++){
	m3 << "\n" << fa[k].nama << "\n" << fa[k].tujuan << "\n" << fa[k].kursi << "\n" << fa[k].tanggal << "\n" << fa[k].bulan << "\n" << fa[k].tahun << "\n";
	}
	for(int j=0;j<b;j++){
	
	m3 << "\n" << fb[j].nama << "\n" << fb[j].tujuan << "\n" << fb[j].kursi << "\n" << fb[j].tanggal << "\n" << fb[j].bulan << "\n" << fb[j].tahun << "\n";
	}
}

void sorting(){
	

}

void bubblesort(){
	int a = 1;
	string nggejrak;
	string namaFile;
	cout << "masukan nama file : ";cin >> namaFile;

	ifstream myfile(namaFile);

	while(getline(myfile,nggejrak)){
		getline(myfile, final[a].nama);
		getline(myfile, final[a].tujuan);
		myfile >> final[a].kursi >> final[a].tanggal >> final[a].bulan >> final[a].tahun;
		myfile.ignore();
		a++;
		}
		
		//bubblesort kursi
        for (int i = 0; i < a - 1; i++)
        {
            for (int j = 0; j < a - i - 1; j++)
            {
                if (final[j].kursi > final[j + 1].kursi) {
                    data temp = final[j];
                    final[j] = final[j + 1];
                    final[j + 1] = temp;
                }
            }
        }
        
        ofstream myf(namaFile, ios::out);
        for (int b = 1;b < a; b++){
        	myf << "\n" << final[b].nama << "\n" << final[b].tujuan << "\n" << final[b].kursi << "\n" << final[b].tanggal << "\n" << final[b].bulan << "\n" << final[b].tahun << "\n";
		}
        
        
    	cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		cout << "| nama			| tujuan		| kursi			| tanggal			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		for (int b = 1;b < a; b++){

		cout << "| " << final[b].nama << "			| " <<final[b].tujuan << "		| " << final[b].kursi << "			| " << final[b].tanggal << "/"<< final[b].bulan << "/" << final[b].tahun << "			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		
		
	}
	
}


void selection(){
	int a = 1;
	string nggejrak;
	string namaFile;
	cout << "masukan nama file : ";cin >> namaFile;
	ifstream myfile(namaFile);

	while(getline(myfile,nggejrak)){
		getline(myfile, final[a].nama);
		getline(myfile, final[a].tujuan);
		myfile >> final[a].kursi >> final[a].tanggal >> final[a].bulan >> final[a].tahun;
		myfile.ignore();
		a++;
		}
	//sekection nama
        for (int i = 0; i < a - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < a; j++)
            {
                if (final[j].nama < final[min].nama)
                {
                    min = j;
                }
            }
            data temp = final[i];
            final[i] = final[min];
            final[min] = temp;
        }
        
    ofstream myf(namaFile, ios::out);
        for (int b = 1;b < a; b++){
        	myf << "\n" << final[b].nama << "\n" << final[b].tujuan << "\n" << final[b].kursi << "\n" << final[b].tanggal << "\n" << final[b].bulan << "\n" << final[b].tahun << "\n";
		}
        
        
        cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		cout << "| nama			| tujuan		| kursi			| tanggal			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		for (int b = 1;b < a; b++){

		cout << "| " << final[b].nama << "			| " <<final[b].tujuan << "		| " << final[b].kursi << "			| " << final[b].tanggal << "/"<< final[b].bulan << "/" << final[b].tahun << "			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		
    }
}

void shell(){
	int a = 1;
	string nggejrak;
	string namaFile;
	cout << "masukan nama file : ";cin >> namaFile;
	ifstream myfile(namaFile);
	while(getline(myfile,nggejrak)){
		getline(myfile, final[a].nama);
		getline(myfile, final[a].tujuan);
		myfile >> final[a].kursi >> final[a].tanggal >> final[a].bulan >> final[a].tahun;
		myfile.ignore();
		a++;
		}
	
	//shell tujuan
	int sum = a / 2;
        while (sum > 0){
            for (int i = sum; i < a; i++){
                data temp = final[i];
                int j = i;
                while (j >= sum && final[j - sum].tujuan > temp.tujuan)
                {
                    final[j] = final[j - sum];
                    j -= sum;
                }
                final[j] = temp;
            }
            sum /= 2;
        }
        
        ofstream myf(namaFile, ios::out);
        for (int b = 1;b < a; b++){
        	myf << "\n" << final[b].nama << "\n" << final[b].tujuan << "\n" << final[b].kursi << "\n" << final[b].tanggal << "\n" << final[b].bulan << "\n" << final[b].tahun << "\n";
		}
		
		
        cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		cout << "| nama			| tujuan		| kursi			| tanggal			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		for (int b = 1;b < a; b++){

		cout << "| " << final[b].nama << "			| " <<final[b].tujuan << "		| " << final[b].kursi << "			| " << final[b].tanggal << "/"<< final[b].bulan << "/" << final[b].tahun << "			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;		
    }
    
        
}

void intertion(){
	int a = 1;
	string nggejrak;
	string namaFile;
	cout << "masukan nama file : ";cin >> namaFile;
	ifstream myfile(namaFile);
	while(getline(myfile,nggejrak)){
		getline(myfile, final[a].nama);
		getline(myfile, final[a].tujuan);
		myfile >> final[a].kursi >> final[a].tanggal >> final[a].bulan >> final[a].tahun;
		myfile.ignore();
		a++;
		}
	//intertion nama
	for (int i = 1; i < a; i++)
        {
            data temp = final[i];
            int j = i - 1;
            while (j >= 0 && final[j].nama > temp.nama)
            {
                final[j + 1] = final[j];
                j--;
            }
            final[j + 1] = temp;
        }
        
        ofstream myf(namaFile, ios::out);
        for (int b = 1;b < a; b++){
        	myf << "\n" << final[b].nama << "\n" << final[b].tujuan << "\n" << final[b].kursi << "\n" << final[b].tanggal << "\n" << final[b].bulan << "\n" << final[b].tahun << "\n";
		}
        
        
        cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		cout << "| nama			| tujuan		| kursi			| tanggal			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		for (int b = 1;b < a; b++){

		cout << "| " << final[b].nama << "			| " <<final[b].tujuan << "		| " << final[b].kursi << "			| " << final[b].tanggal << "/"<< final[b].bulan << "/" << final[b].tahun << "			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;		
    }
    
}

void sequential(){
	int a = 1;
	string nggejrak;
	string namaFile;
	cout << "masukan nama file : ";cin >> namaFile;
	ifstream myfile(namaFile);
	while(getline(myfile,nggejrak)){
		getline(myfile, final[a].nama);
		getline(myfile, final[a].tujuan);
		myfile >> final[a].kursi >> final[a].tanggal >> final[a].bulan >> final[a].tahun;
		myfile.ignore();
		a++;
		}
		int i =0;
		string jeneng;
        cout << "nama yang pengen dicari : ";
        cin >> jeneng;
        bool found = false;
        for ( i = 0; i < a; i++)
        {
            if (final[i].nama == jeneng)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
             cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
			cout << "| nama			| tujuan		| kursi			| tanggal			|" << endl;
			cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
			cout << "| " << final[i].nama << "			| " <<final[i].tujuan << "		| " << final[i].kursi << "			| " << final[i].tanggal << "/"<< final[i].bulan << "/" << final[i].tahun << "			|" << endl;
			cout << "+-------------------------------------------------------------------------------------------------------+" << endl;		
        }else{
            cout << "Data tidak ditemukan" << endl;
        }
    }
    
    
    void binarysearch(){
    int a = 1;
	string nggejrak;
	string namaFile;
	cout << "masukan nama file : ";cin >> namaFile;
	ifstream myfile(namaFile);
	if(myfile.is_open()){
	
	while(getline(myfile,nggejrak)){
		getline(myfile, final[a].nama);
		getline(myfile, final[a].tujuan);
		myfile >> final[a].kursi >> final[a].tanggal >> final[a].bulan >> final[a].tahun;
		myfile.ignore();
		a++;}
		
		
		cout << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		cout << "| nama			| tujuan		| kursi			| tanggal			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		for (int b = 1;b < a; b++){

		cout << "| " << final[b].nama << "			| " <<final[b].tujuan << "		| " << final[b].kursi << "			| " << final[b].tanggal << "/"<< final[b].bulan << "/" << final[b].tahun << "			|" << endl;
		cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
		}
    
        for (int i = 0; i < a - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < a; j++)
            {
                if (final[j].kursi < final[min].kursi)
                {
                    min = j;
                }
            }
            data temp = final[i];
            final[i] = final[min];
            final[min] = temp;
        }
        int kursi;
        cout << endl;
        cout << "pastikan data sudah urut " << endl;
        cout << "Masukkan Nomor kursi : ";
        cin >> kursi;
        int awal = 0, akhir = a - 1;
		int tengah;
        bool found = false;
        while (awal <= akhir){
        	
            tengah = (awal + akhir) / 2;
            if (final[tengah].kursi == kursi)
            {
                found = true;
                break;
            }
            else if (final[tengah].kursi < kursi)
            {
                awal = tengah + 1;
            }
            else
            {
                awal = tengah - 1;
            }
        }
	if (found){
             cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
			cout << "| nama			| tujuan		| kursi			| tanggal			|" << endl;
			cout << "+-------------------------------------------------------------------------------------------------------+" << endl;
			cout << "| " << final[tengah].nama << "			| " <<final[tengah].tujuan << "		| " << final[tengah].kursi << "			| " << final[tengah].tanggal << "/"<< final[tengah].bulan << "/" << final[tengah].tahun << "			|" << endl;
			cout << "+-------------------------------------------------------------------------------------------------------+" << endl;		
        }else{
            cout << "Data tidak ditemukan" << endl;
        }
    }else{
    	cout << "file tidak ditemukan" << endl;
	}
}
