#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "AlgoritimosOrdenacao.h"

int main(){

int i, j, k, entrada1[300], entrada2[3000], entrada3[30000];

int j1 = 300;
for (i = 300; i > 0; i--){
  entrada1[i] = j1;
  j1--;
}

time_t tempoQuickSort300_1 = time(NULL);

int n = sizeof(entrada1)/sizeof(entrada1[0]);//divide o vetor
quickSort(entrada2, 0, n-1);

time_t tempoQuickSort300_2 = time(NULL);

printf("Tempo de execucao do quick sort (300): %i\n", tempoQuickSort300_2 - tempoQuickSort300_2);

//3.000

int j2 = 3000;
for (k = 3000; k > 0; k--){
  entrada2[k] = j2;
  j2--;
}

time_t tempoQuickSort3000_1 = time(NULL);

n = sizeof(entrada2)/sizeof(entrada2[0]);//divide o vetor
quickSort(entrada2, 0, n-1);

time_t tempoQuickSort3000_2 = time(NULL);

printf("Tempo de execucao do quick sort (3000): %i\n", tempoQuickSort3000_2 - tempoQuickSort3000_1);


//30.000
int j3 = 30000;//reorganiza o mesmo vetor em ordem decrescente
for (j = 30000; j > 0; j--){
  entrada3[j] = j3;
  j3--;
}

time_t tempoQuickSort30000_1 = time(NULL);

n = sizeof(entrada3)/sizeof(entrada3[0]);//divide o vetor
quickSort(entrada3, 0, n - 1);

time_t tempoQuickSort30000_2 = time(NULL);

printf("Tempo de execucao do quick sort (30000): %i\n\n\n", tempoQuickSort30000_2 - tempoQuickSort30000_1);

}
