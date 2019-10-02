#include <stdio.h>
#include <stdlib.h>

typedef struct no{
   int info;
   struct no* prox;
   struct no* ant;
} no;

typedef struct lista{
   struct no* inicial;
} Lista;

Lista* init(){
   Lista* lista = (Lista*) malloc(sizeof(lista));
   lista->inicial = NULL;
   return lista;
}

// função de inserir
void inserir(Lista* lista, int i){
	no* novo = (no*)malloc(sizeof(no));
	novo->info = i;
   novo->prox = NULL;
	if(lista->inicial == NULL){
      novo->ant = NULL;
      lista->inicial = novo;
	}else{
      no* cursor = lista->inicial;
      while(cursor->prox != NULL){
         cursor = cursor->prox;
      }
      cursor->prox = novo;
      novo->ant = cursor;
	}
}

// Apenas imprime a lista
void imprimir(Lista* lista){
   no* cursor = lista->inicial;
   while(cursor->prox != NULL){
       printf("%d - ", cursor->info);
       cursor = cursor->prox;
   }
   printf("%d\n----------------------\n", cursor->info);
}

void insertion_sort(Lista* lista){
   no* noChave = lista->inicial;
   //Se tiver apenas um elemento na lista
   if(noChave->prox == NULL) {
      return;
   }
   noChave = noChave->prox; //Segundo elemento da lista
   // Vai ler até o fim da lista (Esquerda pra Direita)
   while(noChave != NULL) {
      no* noAux = noChave;
      // Vai ler até o início da lista (Direita pra Esquerda)
      while(noAux != NULL){
         //Se já estiver ordenado (2, [3])
         if(noChave->ant->info <= noChave->info) {
            break;
         } else if(noAux->ant == NULL || noAux->ant->info < noChave->info) {

            // >> Para melhor entendimento: DESENHE a ligação dos ponteiros!

            //Quando o noAux < noChave
            //if(noAux == primeiro elemento da lista)
            //Quando o noChave tem que ser o primeiro elemento da lista
            no* noAjudante = (no*) malloc(sizeof(no));
            //Clonando noChave (Apenas os ponteiros), para fazer a "movimentação" do noChave
            noAjudante->prox = noChave->prox;
            noAjudante->ant = noChave->ant;

            noChave->ant = noAux->ant;
            noChave->prox = noAux;

            if(noAux->ant == NULL) {
               lista->inicial = noChave;
            } else {
               noAux->ant->prox = noChave;
            }
            noAux->ant = noChave;

            if(noAjudante->prox != NULL){
               noAjudante->ant->prox = noAjudante->prox;
               noAjudante->prox->ant = noAjudante->ant;
            } else {
               noAjudante->ant->prox = NULL;
            }
            noChave = noAjudante->ant;
            break; // Após a troca pode-se dar continuidade avançando noChave
            // De noChave "para trás", já está ordenado (Entçao avança noChave)
         }
         noAux = noAux->ant; // "Percorre" noAux (Direita para Esquerta)
      }
      noChave = noChave->prox; // "Percorre" noChave (Esquerda para Direita)
   }
}

int main() {

   Lista* lista = init();

   inserir(lista,89383);
   inserir(lista,30886);
   inserir(lista,92777);
   inserir(lista,36915);
   inserir(lista,47793);
   inserir(lista,38335);
   inserir(lista,85386);
   inserir(lista,60492);

   printf("Sem ordenar: ");
   imprimir(lista);

   insertion_sort(lista);

   printf("Ordenado: ");
   imprimir(lista);
}

