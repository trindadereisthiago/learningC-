#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Informe um número: \n");
    scanf(" %d", &n1);
    if ((n1 % 2)==0){
        printf(" %d e par.", n1);
    } else {
        printf(" %d e impar.", n1);
    }
}
