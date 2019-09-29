#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,k,aux;
    int indice;
    int *vet;
    printf("Digite o tamanho do vetor\n");
    scanf("%d",&n);
    printf("Digite o numero que nescessariamente estarA no vetor\n");
    scanf("%d",&k);
    vet = malloc(n*sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vet[j] > vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }

        }
    }

    for (int i = 0; i < n ; i++){
            if(vet[i] == k){
                indice = i;
            }
    }

        printf("o numero %d estara no indice %d \t", k ,indice);


}
