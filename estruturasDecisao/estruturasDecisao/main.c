#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n1;
    int n2;
    printf("Informe um número: \n");
    scanf(" %d", &n1);
    printf("Informe outro numero: \n");
    scanf(" %d", &n2);
    if (n1>n2){
        printf(" %d", n1);
    } else {
        printf(" %d", n2);
    }
}
