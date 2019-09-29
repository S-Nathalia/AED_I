#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_vogais(char* s){
    int tam,i;
    tam = strlen(s);
    int vogal = 0;

    for(i=0; s[i] != '\0'; i++){
        if (s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'){
            vogal ++;
        }
    }
    return vogal;
}

int main(){
    int k = 0;
    char *s[20];
    scanf("%[^\n]", &s);

    k = conta_vogais(s);
    printf("%d",k);
    return 0;
}
