#include <stdio.h>
#include <stdlib.h>

int main()
{

printf ("Digite 3 numeros:\n");
int a = 0;
int b = 0;
int c = 0;

int opcao;
int dec[3];
int pos[3] = {0};
int neg[3] = {0};
int imp[3] = {0};
int par[3] = {0};
int m10[3];
int p = 0;
int n = 0;


scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);


printf("Digite a opcao correspondente\n 1 - numeros ordenados decrescente\n 2 - numeros negativos e positivos\n 3 - numeros impares e pares\n 4 - maiores que 10 e menores que 10\n");
scanf("%d",&opcao);

switch(opcao)
{
    case 1:
    if(a > b && a > c){
        dec [0] = a;
        if(b > c){
            dec[1] = b;
            dec[2] = c;
        }else{
            dec[1] = c;
            dec[2] = b;
        }
     }
     if(b > a && b > c){
        dec [0] = b;
        if(a > c){
            dec [1] = a;
            dec [2] = c;
        }else{
            dec [1] = c;
            dec [2] = a;
        }
     }
     if(c > a && c > b){
        dec [0] = c;
        if(a > b){
            dec[1] = a;
            dec[2] = b;
        }else{
            dec[1] = b;
            dec[2] = a;
        }
     }
    printf("%d\n", dec[0]);
    printf("%d\n", dec[1]);
    printf("%d\n", dec[2]);
    break;

    case 2:
        if (a < 0){
            neg[n] = a;
            n += 1;
        }else{
            pos[p] = a;
            p += 1;
        }
        if (b < 0){
            neg[n] = b;
            n += 1;
        }else{
            pos[p] = b;
            p += 1;
        }
        if (c < 0){
            neg[n] = c;
            n += 1;
        }else{
            pos[p] = c;
            p += 1;
        }

        printf("Os negativos sao:\n");
        int i;
        for(i = 0; i < 3; i++){
            printf("%d\n", neg[i]);
        }
        printf("Os positivos são:\n");

        for(i = 0; i < 3; i++){
            printf("%d\n", pos[i]);
        }
    break;

    case 3:
        p = 0;
        n = 0;

        if(a % 2 == 0){
            par[p] = a;
            p += 1;
        }else{
            imp[n] = a;
            n += 1;
        }
        if(b % 2 == 0){
            par[p] = b;
            p += 1;
        }else{
            imp[n] = b;
            n += 1;
        }
        if(c % 2 == 0){
            par[p] = c;
            p += 1;
        }else{
            imp[n] = c;
            n += 1;
        }
        printf("Os numeros pares sao:\n");
        for(i = 0; i < 3; i++){
            printf("%d\n", par[i]);
        }
        printf("Os numeros impares sao:\n");
        for(i = 0; i < 3; i++){
            printf("%d\n", imp[i]);
        }
        break;

}
}
