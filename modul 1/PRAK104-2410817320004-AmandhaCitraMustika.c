#include <stdio.h>

int main(){
int sepatu_a = 400000, sepatu_b = 350000;
float diskon_a = 0.13, diskon_b = 0.21;
int harga_diskon_a, harga_diskon_b;
harga_diskon_a = sepatu_a - (sepatu_a * diskon_a);
harga_diskon_b = sepatu_b - (sepatu_b * diskon_b);
printf("Harga sepatu A adalah %d\n", sepatu_a);
printf("Harga sepatu b adalah %d\n", sepatu_b);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", harga_diskon_a);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", harga_diskon_b);
return 0;
}