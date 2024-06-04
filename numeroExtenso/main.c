#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: \n");
    scanf(" %d", &numero);

    switch(numero){
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Três");
        break;
    case 4:
        printf("Quatro");
        break;
    case 5:
        printf("Cinco");
        break;
    case 6:
        printf("Seis");
        break;
    case 7:
        printf("Sete");
        break;
    case 8:
        printf("Oito");
        break;
    case 9:
        printf("Nove");
        break;
    case 0:
        printf("Zero");
        break;
    default:
        printf("Número não encontrado.");
        break;
    }
    return 0;
}
