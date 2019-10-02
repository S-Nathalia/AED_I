#include <stdio.h>
#include <stdlib.h>

void sort(int vetor[], int size){
    int chave, y, x;

    for(x = 1; x < size; x++){
       chave = vetor[x];

       for(y = x - 1; y >= 0 && vetor[y] < chave; y--){
        vetor[y+1] = vetor[y];
       }
       vetor[y+1] = chave;
    }
}

int main()
{
    int n = 5, i, k;
    int vetor_int[5];
    int *vetor_pot[5];

    for(i=0; i < n; i++){ //recebe os valores;
        scanf("%d", &vetor_int[i]);
    }

    sort(vetor_int, n); //funcao que ordena;

    for(i=0; i < n; i++){ //imprimi a lista correta;
    printf("%d - ", vetor_int[i]);
    }

    for(k = 0; k < n; k++){
        vetor_pot[k] = &vetor_int[k];
    }


    return 0;
}
