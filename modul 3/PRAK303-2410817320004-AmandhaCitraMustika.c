#include <stdio.h>

int main(){
int nilai;
scanf("%d", &nilai);
if(nilai>0) {printf("Positif");}
else if(nilai==0) {printf("Nol");}
else{printf("Negatif");}
    return 0;
}