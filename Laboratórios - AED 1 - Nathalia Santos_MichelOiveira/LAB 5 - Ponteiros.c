#include <stdio.h>
#include <stdlib.h>

int main()
{
int x = 2, y = 8;
int *p, *q;

p = &x;
q = &y;

printf("endereco de x:%d, valor de x:%d\n", &x, x);
printf("valor de p: %d e o valor de *p: %d\n", p, *p);
printf("endereco de y: %d e valor de y: %d\n", &y, y);
printf("o valor de q: %d e *q: %d\n", q, *q);
printf("endereco de p: %d\n", &p);
printf("endereco de q: %d\n", &q);

}
