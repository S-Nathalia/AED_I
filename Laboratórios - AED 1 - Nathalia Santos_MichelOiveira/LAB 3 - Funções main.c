#include<stdio.h>
#include "funcoes.h"

int main()
{   int r;
    int s;
    int a = 0, b = 0, c = 0;
    printf("Digite 3 numeros:\n\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("A soma dos numeros eh:\n\n");
    soma(a, b, c);

    printf("A multiplicacao dos numeros com o max eh:\n\n");
    r = max(a, b, c);
    mul(a, b, c, r);

    printf("A multiplicacao dos 3 numeros com o min eh:\n\n");
    s = min(a, b, c);
    mul2(a, b, c, s);

    return 0;
}
