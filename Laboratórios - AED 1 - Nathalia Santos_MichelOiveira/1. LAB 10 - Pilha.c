#include <stdio.h>
#include <stdlib.h>

struct pilha{
    int info;
    struct pilha* prox;
};typedef struct pilha Pilha;

Pilha* pilhaCria(){
    return NULL;
}


int pilhavazia(Pilha *l){
    if(l == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

Pilha* top(Pilha *l){
    if(l != NULL){
        return l;
    }
    return NULL;
}

Pilha* pop(Pilha *l){
    if(pilhavazia(l)){
        printf("esta vazia");
        exit(1);
    }
    else{
        Pilha *ant = l->prox;
        free(l);
        l = ant;
    }
    return l;
}


Pilha* push(Pilha *l,int info){
    Pilha *novo = (Pilha*)malloc(sizeof(Pilha));
    if(l == NULL){
        novo->info = info;
        novo->prox = NULL;
        return novo;
    }
    novo->info = info;
    novo->prox = l;
    return novo;
}
void imprimir(Pilha *l){
    Pilha *p;
    for(p = l; p != NULL; p = p->prox){
        printf("%d\n",p->info);
    }
}


int main()
{
    Pilha *inicial;
    inicial = pilhaCria();
    inicial = push(inicial,5);
    printf("%d\n",top(inicial)->info);
    inicial = push(inicial,10);
    printf("%d\n",top(inicial)->info);
    inicial = pop(inicial);
    printf("%d\n",top(inicial)->info);
    inicial = pop(inicial);
    inicial = pop(inicial);
    return 0;
}
