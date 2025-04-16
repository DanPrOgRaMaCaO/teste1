#include <stdio.h>

int main(){
    int NumeroNormal = 2147483647; // Valor máximo de int
    long int NumeroGrande = 2147483647;

    printf("Numero com normal (int): %d\n", NumeroNormal);
    printf("Numero Grande (long int): %ld\n", NumeroGrande);

    NumeroGrande = 2147483648; // Valor maior q o máximo de int
    printf("Numero Grande atualizado (long int): %ld\n", NumeroGrande);

    return 0;
}