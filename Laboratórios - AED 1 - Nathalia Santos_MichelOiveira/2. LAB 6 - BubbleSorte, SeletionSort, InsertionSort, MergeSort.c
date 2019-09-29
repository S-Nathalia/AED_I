#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "2. LAB 6 - AlgoritimosOrdenacao.h"

int main(){
  int tam300 = 300, tam3000 = 3000, tam30000 = 30000;
  int j1 = 300, j2 = 3000, j3 = 30000, i, k, j;
  int entrada1[300], entrada2[3000], entrada3[30000];
  int aux_300[300], aux_3000[3000], aux_30000[30000];
  time_t tempoBubble300_1, tempoBubble300_2;
  time_t tempoBubble3000_1, tempoBubble3000_2;
  time_t tempoBubble30000_1, tempoBubble30000_2;
  time_t tempoSelection300_1, tempoSelection300_2;
  time_t tempoSelection3000_1, tempoSelection3000_2;
  time_t tempoSelection30000_1, tempoSelection30000_2;
  time_t tempoInsertion300_1, tempoInsertion300_2;
  time_t tempoInsertion3000_1, tempoInsertion3000_2;
  time_t tempoInsertion30000_1, tempoInsertion30000_2;
  time_t tempoMergeSort300_1, tempoMergeSort300_2;
  time_t tempoMergeSort3000_1, tempoMergeSort3000_2;
  time_t tempoMergeSort30000_1, tempoMergeSort30000_2;


  //cria vetor decrescente
  for (i = 300; i > 0; i--){
    entrada1[i] = j1;
    j1--;
  }

  tempoBubble300_1 = time(NULL);
  bubblesort(entrada1, tam300);
  tempoBubble300_2 = time(NULL);

  printf("Tempo de execucao do bubble sort (300): %i\n", tempoBubble300_2 - tempoBubble300_1);

  j1 = 300;
  for (i = 300; i > 0; i--){
    entrada1[i] = j1;
    j1--;
  }

  tempoSelection300_1 = time(NULL);
  selectionsort(entrada1, tam300);
  tempoSelection300_2 = time(NULL);

  printf("Tempo de execucao do selection sort (300): %i\n", tempoSelection300_2 - tempoSelection300_1);

  j1 = 300;
  for (i = 300; i > 0; i--){
    entrada1[i] = j1;
    j1--;
  }

  tempoInsertion300_1 = time(NULL);
  insertionsort(entrada1, tam300);
  tempoInsertion300_2 = time(NULL);

  printf("Tempo de execucao do insertion sort (300): %d\n", tempoInsertion300_2 - tempoInsertion300_1);

  j1 = 300;
  for (i = 300; i > 0; i--){
    entrada1[i] = j1;
    j1--;
  }

  tempoMergeSort300_1 = time(NULL);
  merge_sort(entrada1, aux_300, 0, 299);
  tempoMergeSort300_2 = time(NULL);

  printf("Tempo de execucao do merge sort (300): %d\n\n\n", tempoMergeSort300_2 - tempoBubble300_1);

  for (k = 3000; k > 0; k--){
    entrada2[k] = j2;
    j2--;
  }

  tempoBubble3000_1 = time(NULL);
  bubblesort(entrada2, tam3000);
  tempoBubble3000_2 = time(NULL);

  printf("Tempo de execucao do bubble sort (3000): %i\n", tempoBubble3000_2 - tempoBubble3000_1);

  j2 = 3000;
  for (k = 3000; k > 0; k--){
    entrada2[k] = j2;
    j2--;
  }

  tempoSelection3000_1 = time(NULL);
  selectionsort(entrada2, tam3000);
  tempoSelection3000_2 = time(NULL);

  printf("Tempo de execucao do selection sort (3000): %i\n", tempoSelection3000_2 - tempoSelection3000_1);

  j2 = 3000;
  for (k = 3000; k > 0; k--){
    entrada2[k] = j2;
    j2--;
  }

  tempoInsertion3000_1 = time(NULL);
  insertionsort(entrada2, tam3000);
  tempoInsertion3000_2 = time(NULL);

  printf("Tempo de execucao de insertion sort (3000): %d\n", tempoInsertion3000_2 - tempoInsertion3000_1);

  j2 = 3000;
  for (k = 3000; k > 0; k--){
    entrada2[k] = j2;
    j2--;
  }

  tempoMergeSort3000_1 = time(NULL);
  merge_sort(entrada2, aux_3000, 0, 2999);
  tempoMergeSort3000_2 = time(NULL);

  printf("Tempo de execucao do merge sort (3000): %d\n\n\n", tempoMergeSort3000_2 - tempoMergeSort3000_1);

  for (j = 30000; j > 0; j--){
    entrada3[j] = j3;
    j3--;
  }

  tempoBubble30000_1 = time(NULL);
  bubblesort(entrada3, tam30000);
  tempoBubble30000_2 = time(NULL);

  printf("Tempo de execucao do bubble sort (30000): %i\n", tempoBubble30000_2 - tempoBubble30000_1);


  j3 = 30000;//reorganiza o mesmo vetor em ordem decrescente
  for (j = 30000; j > 0; j--){
    entrada3[j] = j3;
    j3--;
  }

  tempoSelection30000_1 = time(NULL);
  selectionsort(entrada3, tam30000);
  tempoSelection30000_2 = time(NULL);

  printf("Tempo de execucao do selection sort (30000): %i\n", tempoSelection30000_2 - tempoSelection30000_1);

  j3 = 30000;
  for (j = 30000; j > 0; j--){
    entrada3[j] = j3;
    j3--;
  }

  tempoInsertion30000_1 = time(NULL);
  insertionsort(entrada3, tam30000);
  tempoInsertion30000_2 = time(NULL);

  printf("Tempo de execucao de insertion sort (30000): %d\n", tempoInsertion30000_2 - tempoInsertion30000_1);

  j3 = 30000;
  for (j = 30000; j > 0; j--){
    entrada3[j] = j3;
    j3--;
  }

  tempoMergeSort30000_1 = time(NULL);
  merge_sort(entrada3, aux_30000, 0, 29999);
  tempoMergeSort30000_2 = time(NULL);

  printf("Tempo de execucao do merge sort( 30000): %d\n\n\n", tempoMergeSort30000_2 - tempoMergeSort30000_1);
}
