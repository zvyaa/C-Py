#include <stdio.h>

int main(){
    int a = 9, b = 5, x = 8, y = 8;
    int modolus_ab, modolus_xy, total_modolus;
    modolus_ab = a % b;
    modolus_xy = x % y;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    total_modolus = modolus_ab + modolus_xy;
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_modolus);
    return 0;
}