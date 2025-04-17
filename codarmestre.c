#include <stdio.h>

int main(){
    //Declarar variáveis Produto, u i estoque, double valor unitário, u i quantidade mínima
    char produtoA[30] = "Pruduto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.5;
    float valorB = 20.4;

    unsigned int estoqueMininoA = 500;
    unsigned int estoqueMininoB = 2500;

    double valotTotalA;
    double valorTotalB; 

    int resultadoA, resultadoB;

    // Exibir informações
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produtoB, estoqueB, valorB);

    // Comparações com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMininoA;
    resultadoB = estoqueB > estoqueMininoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    // Comparação entre valores totais do produto
    printf("O valor total de A (R$%.2f) é maior que o valor total de B? (R$%.2f)? %d\n", 
                                estoqueA * valorA,
                                estoqueB * valorB,
                                (estoqueA * valorA > estoqueB * valorB));


}