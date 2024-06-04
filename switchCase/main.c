#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mes;
    printf("Insira o número do mês: ");
    scanf(" %d", &mes);
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Este mês tem 31 dias");
            break;
        case 2:
            printf("Este mês tem 28 ou 29 dias");
            break;
        default:
            printf("Este mês tem 30 dias");
            break;
    }
}
