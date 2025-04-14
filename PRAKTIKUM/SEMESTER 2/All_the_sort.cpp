// #include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <chrono>
using namespace std;
using namespace chrono;

long long int O=0;//global variable to count comparison

int* generate_random_Array(int arrsize, int Mod){
    int* arr = new int[arrsize];
    srand(time(0));
    for(int i=0;i<arrsize;i++){
        arr[i]=rand()%Mod;
    }
    return arr;
}

void print_Array(int Arr[],int arrsize){
    for(int i=0;i<arrsize;i++){
        cout << Arr[i] << " " ;
    }
}

void BubbleSort(int Arr[], int ArrSize){
    int Temp;
    for(int i=0;i<ArrSize-1;i++){
        for (int j=0;j<ArrSize-i-1; j++){
            O++;
            //swap Arr if the next value is greater
            if(Arr[j] > Arr[j+1]){
                Temp = Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1] = Temp;
            }
        }
    }
}

void SelectionSort(int Arr[], int ArrSize){
    int Temp,MinIndex;
    for(int i=0; i < ArrSize-1;i++){
        MinIndex=i;
        for(int j=i+1; j < ArrSize; j++){
            O++;
            if(Arr[MinIndex] > Arr[j] ){
                MinIndex=j;
            }
        }
        Temp = Arr[i];
        Arr[i] = Arr[MinIndex];
        Arr[MinIndex] = Temp;
    }
}

void InsertionSort(int Array[], int ArraySize){
    int Temp,j;
    for (int i = 1; i < ArraySize; i++){
        Temp=Array[i];
        j=i-1;
        while(j>=0 && Array[j]>Temp){
            Array[j+1] = Array[j];
            j--;
        }
        Array[j+1] = Temp;
    }
    
}

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L=new int[n1],
        *R=new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void ShellSort(int Arr[], int ArrSize){
    int Temp;
    for(int i=ArrSize/2; i > 0; i/=2){
        for(int j=i; j < ArrSize; j+=1){
            Temp=Arr[j];
            int k;
            for(k = j; k>=i && Arr[k-i] > Temp; k-=i){
                Arr[k] = Arr[k-i];
                O++;
            }
            Arr[k] = Temp;
        }
    }
}

int partition(int Arr[],int low, int high){
    int pivot = Arr[high];
    int i=low-1;
    for(int j=low; j<=high -1 ; j++){
        if (Arr[j] < pivot){
            i++;
            swap(Arr[i],Arr[j]);
        }
    }
    swap(Arr[i+1],Arr[high]);
    return i+1;
}

void QuickSort(int Arr[],int low, int high){
    if(low < high){
        int pi = partition(Arr,low,high);
        QuickSort(Arr,low,pi-1);
        QuickSort(Arr,pi+1,high);
    }
}

main(){
    int* Arr;
    int Arrsize=1000;
    Arr = generate_random_Array(Arrsize,1000);
    print_Array(Arr,Arrsize);
    
    cout << "\n\nSorting the Arr............\n\n";

    auto t1=high_resolution_clock::now();//timer start

    // BubbleSort(Arr,Arrsize);
    QuickSort(Arr,0,Arrsize-1);
    // mergeSort(Arr,0,Arrsize-1);


    auto t2=high_resolution_clock::now();//timer stop
    auto duration= duration_cast<nanoseconds>(t2 - t1);
    
    print_Array(Arr,Arrsize);
    
    cout << "\nDurasi eksekusi : " << duration.count() << " nanosecond" << endl;
    // cout << duration.count() << " second "<<endl;
    // cout << "Time of comparison : " << O;
    delete[] Arr;
}
// Making an Arr the size of 1.000.000 or above may not be practical if you want to print them.