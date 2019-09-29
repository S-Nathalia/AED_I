#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f = 1, fat = 1;

    printf("Digite um numero:\n");
    scanf("%d", &n);
    printf("\nSeus divisores sao:\n");

    while(f <= n){
        if(n%f == 0){
            printf("\n%d", f);
        } f += 1;
    }

    for(f = n; f>= 1; f--){
        fat *= f;
    }
    printf("\n\nO fatorial de n eh: %d\n", fat);
    return 0;
}
