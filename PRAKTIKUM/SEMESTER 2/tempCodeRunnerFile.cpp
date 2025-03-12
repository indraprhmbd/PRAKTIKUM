void tampilkanMhs(int N){
    if(N<0) return; //basis rekursif
    else {
        outputMhs(N);
        tampilkanMhs(N-1);
    }
}