#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void booblesort(int vet[], int tam){
    int print = tam;
    int n;
    for(int i = 1; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(vet[j] > vet[j+1]){
                n = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = n;
            }

        }
    }

    for(int k = 0; k < print; k++){
        printf("%d\n", vet[k]);
    }

}

int main(){
    int vet[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tam = 10;
    booblesort(vet, tam);

    return 0;
}
