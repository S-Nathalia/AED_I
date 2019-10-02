#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
   int quantidadeElementos;
   struct no* primeiro;
} Lista;

typedef struct no {
   int valor;
   struct no* prox;
} No;


Lista* criarLista(){
   Lista* lista = (Lista*) malloc(sizeof(Lista));
   lista->quantidadeElementos = 0;
   lista->primeiro = NULL;
   return lista;
}

No* criarNo(int valor, No* proximoNo) {
   No* no = (No*) malloc(sizeof(No));
   no->valor = valor;
   no->prox = proximoNo;
   return no;
}

void addLista(Lista* lista, int valor){

   No* noLista = lista->primeiro;
   //lista vazia
   if(noLista == NULL) {
      No* no = criarNo(valor, NULL);
      lista->primeiro = no;
      lista->quantidadeElementos++;
   //Caso o valor a ser introduzido seja menor que o primeiro valor da lista
   } else if(noLista->valor > valor) {
      No* no = criarNo(valor, noLista);
      lista->primeiro = no;
      lista->quantidadeElementos++;

   } else {
      //Se tem mais de um elemento do array
      while(noLista != NULL){
         //Se existe prox no e ele for maior que o no que quero inserir
         if(noLista->prox != NULL && noLista->prox->valor > valor) {
            No* aux = noLista->prox;
            No* no = criarNo(valor, aux);
            noLista->prox = no;
            // noLista = A
            // T = aux
            // H = no
            // ==========
            // A -> T
            // A -> H -> T
            lista->quantidadeElementos++;
            break;
         }
         if(noLista->prox == NULL) {
            No* no = criarNo(valor, NULL);
            noLista->prox = no;
            lista->quantidadeElementos++;
            break;
         }
         noLista = noLista->prox;
      }
   }
}

void printarLista(Lista* lista){
	int i;
   No* no = lista->primeiro;
   for(i = 0; i < lista->quantidadeElementos; i++) {
      printf("%i - ", no->valor);
      no = no->prox;
   }
   printf("\n");
}


int main() {

   Lista* lista1 = criarLista();
   Lista* lista2 = criarLista();
   int n;
   
   printf("Digite 3 entradas para lista 1\n");
   scanf("%i", &n);
   addLista(lista1, n);
   scanf("%i", &n);
   addLista(lista1, n);
   scanf("%i", &n);
   addLista(lista1, n);
   
   printf("\nDigite 3 entradas para Lista 2\n");
   scanf("%i", &n);
   addLista(lista2, n);
   scanf("%i", &n);
   addLista(lista2, n);
   scanf("%i", &n);
   addLista(lista2, n);

   printf("\nSua Lista 1: ");
   printarLista(lista1);
   printf("\n");
   printf("\nSua Lista 2: ");
   printarLista(lista2);
   printf("\n");

   return 0;
}
