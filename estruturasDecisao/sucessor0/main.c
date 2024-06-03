#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, numero;
    printf("Informe um número entre 1 e 60: \n");
    scanf(" %d", &n1);
    if (n1<60){
        numero = n1 + 1;
        printf(" %d e o sucessor de %d\n", numero, n1);
    } else if (n1 == 60) {
        printf(" 0 e o sucessor de %d.\n", n1);
    } else if (n1>60){
        printf("Erro: Valor acima do pedido.");
    }
}
