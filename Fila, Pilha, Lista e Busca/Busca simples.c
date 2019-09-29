#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int vetor[], int buscando, int inicio, int fim){
   int meio = (inicio+fim)/2;
   if(vetor[meio] == buscando){
       return vetor[meio];
   }else{
       if(inicio >= fim){
           return -1;
       }
       if(vetor[meio] > buscando){
           printf("Busca em %d-%d\n",inicio,meio);
           busca_binaria(vetor,buscando,inicio,meio-1);
       }else{
           printf("Busca em %d-%d\n",meio+1,fim);
           busca_binaria(vetor,buscando,meio+1,fim);
       }
   }
}

