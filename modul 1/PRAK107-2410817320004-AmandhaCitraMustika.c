#include <stdio.h>

int main(){
    int sisi1 = 4, sisi2 = 5, sisi3 = 7;
    int keliling;
    int harga_per_meter = 85000;
    int total_biaya;
    keliling = sisi1 + sisi2 + sisi3;
    total_biaya = keliling * harga_per_meter;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_biaya);
    return 0;
}