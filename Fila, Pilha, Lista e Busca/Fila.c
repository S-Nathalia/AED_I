#include <stdio.h>
#include <stdlib.h>

typedef struct no{
   int info;
   struct no* ant;
}no;

typedef struct fila{
   struct no* inicio;
   struct no* fim;
}fila;
fila* init(){
   fila* fila = malloc(sizeof(fila));
   fila->inicio = NULL;
   fila->fim = NULL;
   return fila;
}
void insert(fila* fila,int num){
   no* novo = malloc(sizeof(no));
   novo->info = num;
   novo->ant = NULL;
   if(fila->inicio == NULL){
       fila->inicio = novo;
       fila->fim = novo;
   }else{
       fila->inicio->ant = novo;
       fila->inicio = novo;
   }
}
int remove_fila(fila* fila){
   if(fila->fim != NULL){
       no* temp = fila->fim;
       fila->fim = fila->fim->ant;
       return temp->info;
   }
}
int main(){
   fila* fila = init();
   insert(fila,834);
   insert(fila,666);
   insert(fila,777);
   insert(fila,111);
   printf("%d\n",remove_fila(fila));
   printf("%d\n",remove_fila(fila));
   printf("%d\n",remove_fila(fila));
   printf("%d\n",remove_fila(fila));
   
   
}
