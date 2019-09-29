#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(int vet[], int tam){
    int n, i, j;
   
    for(i = 1; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(vet[j] > vet[j+1]){
                n = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = n;
            }

        }
    }
}
void selectionsort(int vet[], int tam){
    int aux, m, i, j;
    
	for(i = 0; i < tam; i++){
        m = i;
        for(j = i+1; j < tam; j++){
            if(vet[m] > vet[j]){
            m = j;
            }
        }
        aux = vet[i];
        vet[i] = vet[m];
        vet[m] = aux;
    }

}

int main(){
    int tam300 = 300, tam3000 = 3000, tam30000 = 30000;
    int j1 = 300, j2 = 3000, j3 = 30000, i, k, j;
    int entrada1 [300], entrada2 [3000], entrada3 [30000];
    time_t tempoBubble300_1;
    time_t tempoBubble300_2; 
    time_t tempoBubble3000_1;
    time_t tempoBubble3000_2;
    time_t tempoBubble30000_1;
    time_t tempoBubble30000_2;
    time_t tempoSelection300_1;
    time_t tempoSelection300_2; 
    time_t tempoSelection3000_1;
    time_t tempoSelection3000_2;   
    time_t tempoSelection30000_1;
    time_t tempoSelection30000_2;
    
    //cria vetor decrescente
    for (i = 300; i > 0; i--){
        entrada1[i] = j1;
        j1--;
    }
    
    tempoBubble300_1 = time(NULL);
    bubblesort(entrada1, tam300);
    tempoBubble300_2 = time(NULL);
    printf("Tempo de execucao do bubble sort(300): %i\n", tempoBubble300_2 - tempoBubble300_1);
    
    j1 = 300;
	for (i = 300; i > 0; i--){
        entrada1[i] = j1;
        j1--;
    }
    tempoSelection300_1 = time(NULL);
    selectionsort(entrada1, tam300);
    tempoSelection300_2 = time(NULL);
    printf("Tempo de execucao do selection sort(300): %i\n", tempoSelection300_2 - tempoSelection300_1);
    printf("Diferenca de: %d\n", tempoSelection300_2 - tempoBubble300_2);
    
	for (k = 3000; k > 0; k--){
            entrada2[k] = j2;
            j2--;
    }
    
    tempoBubble3000_1 = time(NULL);
    bubblesort(entrada2, tam3000);
    tempoBubble3000_2 = time(NULL);
    printf("Tempo de execucao do bubble sort(3000): %i\n", tempoBubble3000_2 - tempoBubble3000_1);
    
    j2 = 3000;
	for (k = 3000; k > 0; k--){
        entrada2[k] = j2;
        j2--;
    }
    
    tempoSelection3000_1 = time(NULL);
    selectionsort(entrada2, tam3000);
    tempoSelection3000_2 = time(NULL);
    printf("Tempo de execucao do selection sort(3000): %i\n", tempoSelection3000_2 - tempoSelection3000_1);
    printf("Diferenca de: %d\n", tempoSelection3000_2 - tempoBubble3000_2);
    
    for (j = 30000; j > 0; j--){
            entrada3[j] = j3;
            j3--;
    }
    
	tempoBubble30000_1 = time(NULL);
    bubblesort(entrada3, tam30000);
    tempoBubble30000_2 = time(NULL);
    printf("Tempo de execucao do bubble sort(30000): %i\n", tempoBubble30000_2 - tempoBubble30000_1);
    
    
    j3 = 30000;
    for (j = 30000; j > 0; j--){
        entrada3[j] = j3;
        j3--;
    }
    
    tempoSelection30000_1 = time(NULL);
    selectionsort(entrada3, tam30000);
    tempoSelection30000_2 = time(NULL);
    printf("Tempo de execucao do selection sort(30000): %i\n", tempoSelection30000_2 - tempoSelection30000_1);
    printf("Diferenca de: %d\n", tempoSelection30000_2 - tempoBubble30000_2);

}

