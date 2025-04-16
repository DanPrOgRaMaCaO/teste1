#include <stdio.h>

int main(){
    int NumeroSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int NumeroSemSinal = 3000000000;

    printf("Numero com sinal: %d\n", NumeroSinal);
    printf("Numero sem sinal: %u\n", NumeroSemSinal);

    return 0;
}