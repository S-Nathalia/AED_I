#include <stdio.h>
#include <stdlib.h>

typedef struct no{
   int info;
   struct no* prox;
}no;

typedef struct lista{
   struct no* inicial;
}lista;

lista* init(){
   lista* lista = malloc(sizeof(lista));
   lista->inicial = NULL;
   return lista;
}

void inserir(lista* lista,int num){
   no* novo = malloc(sizeof(no));
   novo->info = num;
   novo->prox = NULL;
   if(lista->inicial == NULL){
       lista->inicial = novo;
   }else{
       no* cursor = lista->inicial;
       while(cursor->prox != NULL){
           cursor = cursor->prox;
       }
       cursor->prox = novo;
   }
}
void remover(lista* lista, int num){
   no* cursor2 = NULL;
   no* cursor = lista->inicial;
   while(cursor != NULL){
       if(cursor->info == num){
           if(cursor2 == NULL){
               lista->inicial = cursor->prox;
               cursor2 = NULL;
           }else{
               cursor2->prox = cursor->prox;
               cursor2 = cursor;
           }
           no* prox = cursor->prox;
           free(cursor);
           cursor = prox;
       }else{
           cursor2 = cursor;
           cursor = cursor->prox;
       }
   }
}

void print(lista* lista){
   no* cursor = lista->inicial;
   while(cursor->prox != NULL){
       printf("%d\n",cursor->info);
       cursor = cursor->prox;
   }
   printf("%d\n",cursor->info);
}
int main(){
   lista* lista = init();
   inserir(lista,1);
   inserir(lista,2);
   inserir(lista,3);
   inserir(lista,4);
   inserir(lista,5);
   inserir(lista,6);
   inserir(lista,7);
   remover(lista,5);
   
   print(lista);
   
}
