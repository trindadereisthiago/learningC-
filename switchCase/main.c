#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mes;
    printf("Insira o n�mero do m�s: ");
    scanf(" %d", &mes);
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Este m�s tem 31 dias");
            break;
        case 2:
            printf("Este m�s tem 28 ou 29 dias");
            break;
        default:
            printf("Este m�s tem 30 dias");
            break;
    }
}
