#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pré Incremento ++a
    Pós Incremento a++
    Decremento (--)
    Pré Decremento --a
    Pós Decremento a--    
    */

    int numero1 = 2, resultado;

    printf("Antes do incremento: %d\n", numero1);
    //numero1 = numero1 + 1
    //numero1 += 1
    numero1++;
    printf("Após o incremento: %d\n", numero1);
    
    //numero1 = numero1 - 1
    //numero1 -= 1
    numero1--;
    printf("Após o decremento: %d\n", numero1);

    //Pós-imcremento
    resultado = numero1++;
    printf("Após o Pós-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

    //Pré-incremento
    resultado = ++numero1;
    printf("Após o Pré-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

    // Pós-decremento
    resultado = numero1--;
    printf("Após o Pós-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);

    //Pré-decremento
    resultado = --numero1;
    printf("Após o Pré-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);



}