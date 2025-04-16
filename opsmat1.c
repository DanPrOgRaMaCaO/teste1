#include <stdio.h>

int main() {
/*
soma (+)
subtracao (-)
sultiplicacao (*)
divisão (/)
*/

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

// operação soma
soma = numero1 + numero2;

// operação subtracao
subtracao = numero1 - numero2;

// operação multiplicacao
multiplicacao = numero1 * numero2;

// operação divisao
divisao = numero1 / numero1;

printf("entre com o numero 1:\n");
scanf("%d", &numero1);
printf("entre com o numero 2:\n");
scanf("%d", &numero2);

// operação soma
soma = numero1 + numero2;

// operação subtracao
subtracao = numero1 - numero2;

// operação multiplicacao
multiplicacao = numero1 * numero2;

// operação divisao
divisao = numero1 / numero2;

printf("A soma é: %d\n", soma);
printf("A subtração é: %d\n", subtracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf("A divisão é: %d\n", divisao);
return 0;
}