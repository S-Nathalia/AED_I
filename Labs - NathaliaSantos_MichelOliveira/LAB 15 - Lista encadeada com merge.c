#include <stdio.h>
#include <stdlib.h>

typedef struct no{
  int info;
  struct no* prox;
}No;

typedef struct lista{
  struct no* inicial;
}Lista;

Lista* init(){
  Lista* lista = malloc(sizeof(Lista));
  lista->inicial = NULL;
  return lista;
}

void inserir(Lista* lista, int num){
  No* novo = malloc(sizeof(No));
  novo->info = num;
  novo->prox = NULL;
  if(lista->inicial == NULL){
    lista->inicial = novo;
  }else{
    No* cursor = lista->inicial;
    while(cursor->prox != NULL){
      cursor = cursor->prox;
    }
    cursor->prox = novo;
  }
}
void remover(Lista* lista, int num){
  No* cursor2 = NULL;
  No* cursor = lista->inicial;
  while(cursor != NULL){
    if(cursor->info == num){
      if(cursor2 == NULL){
        lista->inicial = cursor->prox;
        cursor2 = NULL;
      }else{
        cursor2->prox = cursor->prox;
        cursor2 = cursor;
      }
      No* prox = cursor->prox;
      free(cursor);
      cursor = prox;
    }else{
      cursor2 = cursor;
      cursor = cursor->prox;
    }
  }
}

void printar(Lista* lista){
  No* cursor = lista->inicial;
  while(cursor->prox != NULL){
    printf("%d - ",cursor->info);
    cursor = cursor->prox;
  }
  printf("%d\n", cursor->info);
}

void merge(Lista* lista1, Lista* lista2, Lista* listaFinal){
  int valor;
  if(lista1->inicial != NULL && lista2->inicial != NULL){
    No* cursor1 = lista1->inicial;
    No* cursor2 = lista2->inicial;

    while(cursor1 != NULL && cursor2 != NULL){
      if(cursor1->info <= cursor2->info){
        valor = cursor1->info;
        inserir(listaFinal, valor);
        cursor1 = cursor1->prox;
      }else{
        valor = cursor2->info;
        inserir(listaFinal, valor);
        cursor2 = cursor2->prox;
      }
    }

    if(cursor1 == NULL && cursor2 != NULL){
      while(cursor2 != NULL){
        valor = cursor2->info;
        inserir(listaFinal, valor);
        cursor2 = cursor2->prox;
      }
    }

    if(cursor2 == NULL && cursor1 != NULL){
      while(cursor1 != NULL){
        valor = cursor1->info;
        inserir(listaFinal, valor);
        cursor1 = cursor1->prox;
      }
    }

  }
}



int main(){
  Lista* lista1 = init();
  Lista* lista2 = init();
  Lista* lista3 = init();

  inserir(lista1, 1);
  inserir(lista1, 8);
  inserir(lista1, 12);

  inserir(lista2, 4);
  inserir(lista2, 5);
  inserir(lista2, 6);

  printf("Lista 1: ");
  printar(lista1);
  printf("\n\nLista 2: ");
  printar(lista2);

  merge(lista1, lista2, lista3);
  printf("\n\nListas 1 e 2 unidas: ");
  printar(lista3);

}
