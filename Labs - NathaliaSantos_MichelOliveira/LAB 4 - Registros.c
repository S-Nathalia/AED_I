#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct LIVRO{
    char id [50];
    int paginas;
    float real;
    float dollar;
    };

int main(){

    struct LIVRO l;
    printf("Digite o nome do livro:\n");
    scanf("%s", &l.id);
    printf("Digite o numero de paginas:\n");
    scanf("%d", &l.paginas);
    printf("Digite o valor em real:\n");
    scanf("%f", &l.real);
    l.dollar = l.real * 5;

    printf("Livro: %s\n", l.id);
    printf("Paginas: %d\n", l.paginas);
    printf("Preco em real:%.2f\n", l.real);
    printf("Preco em dolar: %.2f\n", l.dollar);


    printf("Digite outro valor em real para este livro:\n");
    scanf("%f", &l.real);
    l.dollar = l.real * 5;

    printf("--------------------------------\n");

    printf("Livro: %s\n", l.id);
    printf("Paginas: %d\n", l.paginas);
    printf("Preco em real:%.2f\n", l.real);
    printf("Preco em dolar: %.2f\n", l.dollar);


}
