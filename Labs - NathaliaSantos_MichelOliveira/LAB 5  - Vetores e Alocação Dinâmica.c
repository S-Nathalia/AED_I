#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *v;
    int x;
    int i;
    printf("digite a quantidade dos numeros que irao entrar:\n\n");

    scanf("%d\n\n",&x);

    v = malloc(x * sizeof(int));

    for(i = 0; i < x; i++){
        scanf("%d", &v[i]);
    }
      for(i = x-1; i>=0; i--){
        printf("\n%d", v[i]);
    }
    free(v);

    return 0;
}
