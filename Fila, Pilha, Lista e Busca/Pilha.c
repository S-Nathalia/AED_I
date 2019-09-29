#include<stdio.h>
#include<stdlib.h>

typedef struct no{
   int info;
   struct no* prox;
}no;

typedef struct pilha{
   struct no* topo;
}pilha;

pilha* init(){
   pilha* pilha = malloc(sizeof(pilha));
   pilha->topo = NULL;
   return pilha;
}

void push(pilha* pilha, int num){
   no* novo = (no*)malloc(sizeof(no));
   novo->info = num;
   novo->prox = NULL;
   if(pilha->topo == NULL){
       pilha->topo = novo;
   }else{
       no* temp = pilha->topo;
       pilha->topo = novo;
       novo->prox = temp;
   }
}
int pop(pilha* pilha){
   if(pilha->topo != NULL){
       no* temp = pilha->topo;
       pilha->topo = temp->prox;
       return temp->info;
   }
}
void print(pilha* pilha){
   no* cursor = pilha->topo;
   while(cursor->prox != NULL){
       printf("%d\n", cursor->info);
       cursor = cursor->prox;
   }
   printf("%d\n", cursor->info);
}
int main(){
   pilha* pilha = init();
   push(pilha, 5);
   push(pilha, 7);
   push(pilha, 4);
   printf("%d",pop(pilha));
}
