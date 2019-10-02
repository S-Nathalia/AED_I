#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    int id;
    int idade;
    float altura;
}Aluno;

int main(){
    Aluno ALUNO[5];
    int tam = 5;
    int m, i, j, k;

    for(k = 0; k < tam; k++){
        scanf("%i", &ALUNO[k].id);
        scanf("%i", &ALUNO[k].idade);
        scanf("%f", &ALUNO[k].altura);
    }
    Aluno aux;
    for(i = 0; i<tam;i++){
        m = i;
            for(j = i +1; j < tam;j++){
                 if (ALUNO[m].altura > ALUNO[j].altura){
                m = j;
                }

                }
                aux = ALUNO[i];
                ALUNO[i] = ALUNO[m];
                ALUNO[m] = aux;
            }



    for (k = 0; k < tam; k++){
        printf("%0.2f\n", ALUNO[k].altura);
    }
    return 0;
}
