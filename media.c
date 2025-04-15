#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf(" *Programa de Cálculo de Média*\n");

    printf("Digite a primeita nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.2f\n", media);
}