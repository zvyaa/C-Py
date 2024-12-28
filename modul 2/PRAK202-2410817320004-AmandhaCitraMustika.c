#include <stdio.h>

int main(){
    float NP, NK, hasil;;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &NP);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &NK);
    hasil = NP + NK;
    if(NP==(int)NP){
        printf("Hasil dari penjumlahan nilai pertama \"%d\" dan nilai kedua\"%.1f\" adalah \"%.2f\"\n\n", (int)NP,NK,hasil);
    }
    else{
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua\"%.1f\" adalah \"%.2f\"\n\n", NP,NK,hasil);
    }
    return 0;
}