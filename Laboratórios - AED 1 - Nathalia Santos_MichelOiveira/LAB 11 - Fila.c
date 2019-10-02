#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pilha{
    float info;
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


Pilha* push(Pilha *l,float info){
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

struct aluno{
    char nome[100];
    Pilha* notas;
};typedef struct aluno Aluno;


Aluno adicionarAluno(Aluno primeiro, char nome[100], float nota1, float nota2, float nota3){
    strcpy(primeiro.nome, nome);
    Pilha* notas = pilhaCria();
    notas = push(notas, nota1);
    notas = push(notas, nota2);
    notas = push(notas, nota3);
    primeiro.notas = notas;
    return primeiro;
}


struct fila{
    Aluno aluno;
    struct fila* proximo;
};typedef struct fila Fila;


Fila* iniciarFila(){
    return NULL;
}


Fila* adicionarValor(Fila* inicial,Aluno valor){
    Fila* nova = (Fila*)malloc(sizeof(Fila));
    if(inicial == NULL){
        nova->aluno = valor;
        nova->proximo = NULL;
        return nova;
    }
    else{
        Fila* p;
        for(p = inicial;p != NULL;p = p->proximo){
            if(p->proximo == NULL){
                nova->aluno = valor;
                nova->proximo = NULL;
                p->proximo = nova;
                return inicial;
            }
        }
    }
    return inicial;
}


Fila* removerValor(Fila* inicial){
    if(inicial == NULL){
        printf("Fila Vazia");
        exit(1);
    }
    else{
        Fila* proxima = inicial->proximo;
        free(inicial);
        inicial = proxima;
    }
    return inicial;
}

void imprimirNotas(Pilha* notas){
    Pilha* l;
    printf("Notas: ");
    for(l = notas; l != NULL; l = l->prox){
        printf("%.2f ", l->info);
    }
    printf("\n");
}

void imprimirFila(Fila* inicial){
    Fila* p;
    for(p = inicial; p != NULL; p = p->proximo){
        printf("Aluno: ");
        printf("%s \n", p->aluno.nome);
        imprimirNotas(p->aluno.notas);
    }
}

int main()
{
    Fila* inicial = iniciarFila();
    Aluno primeiro = adicionarAluno(primeiro, "Nathalia", 9.5, 8.5, 9.1);
    inicial = adicionarValor(inicial, primeiro);
    Aluno segundo = adicionarAluno(segundo, "Michel", 7.1, 9.5, 10.0);
    inicial = adicionarValor(inicial, segundo);
    imprimirFila(inicial);
    return 0;
}
