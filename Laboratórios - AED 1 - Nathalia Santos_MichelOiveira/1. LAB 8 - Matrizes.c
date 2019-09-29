#include <stdio.h>
#include <stdlib.h>

void matriz1(int n){
    int i, j;
    int **mat;
    int **mat2;

    mat = (int**)malloc(n*sizeof(int*));
    for(i = 0;i < n; i++){
        mat[i] = (int*)malloc(n*sizeof(int));
    }
    mat2 = (int**)malloc(n*sizeof(int*));
    for(i = 0;i < n; i++){
        mat2[i] = (int*)malloc(n*sizeof(int));
    }
    printf("Digite os valores da 1a matriz:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite os valores da 2a matriz:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
        int k, **mat_sub;

    mat_sub = (int**)malloc(n*sizeof(int*));
    for(i = 0;i < n; i++){
        mat_sub[i] = (int*)malloc(n*sizeof(int));
    }
    for(i = 0; i < n; i++){
        for(k = 0; k < n; k++){
            mat_sub[i][k] = mat[i][k] - mat2[i][k];
        }
    }

    printf("A subtracao das matrizes eh:\n");
    for(i = 0; i < n; i++){
        if(k == n){
            printf("\n");
        }
    for(k = 0; k < n; k++){
        printf("%d, ", mat_sub[i][k]);
    }
    }
    printf("\n");
    free(mat);
    free(mat2);
    free(mat_sub);
}
void matriz2(int n){
    int i;
    int *mat;
    int *mat2;
    int *mat_sub;

    mat = (int*)malloc(n*n*sizeof(int));
    mat2 = (int*)malloc(n*n*sizeof(int));
    mat_sub = (int*)malloc(n*n*sizeof(int));

    printf("Digite os valores da 1a matriz:\n");
    for(i = 0; i < n*n; i++){
        scanf("%d", &mat[i]);}

    printf("Digite os valores da 2a matriz:\n");
    for(i = 0; i < n*n; i++){
        scanf("%d", &mat2[i]);}


    for(i = 0; i < n*n ; i++){
    mat_sub[i] = mat[i] - mat2[i];
        }

    printf("A subtracao das matrizes eh:\n");
    for(i = 0; i < n*n; i++){
        if(i % n == 0){
            printf("\n");}
        printf("%d, ", mat_sub[i]);
    }
    printf("\n");
    free(mat);
    free(mat2);
    free(mat_sub);
    }

int main()
{
int n;
    printf("Digite a ordem da matriz:\n");
    scanf("%d", &n);

printf("\n\tMATRIZ REPRESENTADA POR UM VETOR SIMPLES:\n\n");
    matriz1(n);
printf("\n\tMATRIZ REPRESENTADA POR UM VETOR DE PONTEIROS:\n\n");
    matriz2(n);

    return 0;

}
