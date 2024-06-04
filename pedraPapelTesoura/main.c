#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int jogador, computador;

    srand(time(NULL));

    computador = rand() % 3 + 1;

    printf("Escolha:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Sua escolha: ");
    scanf("%d", &jogador);

    switch(computador) {
case 1:
    printf("Computador escolheu Pedra\n");
    break;
case 2:
    printf("Computador escolheu Papel\n");
    break;
case 3:
    printf("Computador escolheu Tesoura\n");
    break;
}
    switch(jogador) {
        case 1: // Jogador escolheu Pedra
            switch(computador) {
                case 1: // Computador escolheu Pedra
                    printf("Empate!\n");
                    break;
                case 2: // Computador escolheu Papel
                    printf("Você perdeu! Papel embrulha Pedra.\n");
                    break;
                case 3: // Computador escolheu Tesoura
                    printf("Você ganhou! Pedra quebra Tesoura.\n");
                    break;
            }
            break;
        case 2: // Jogador escolheu Papel
            switch(computador) {
                case 1: // Computador escolheu Pedra
                    printf("Você ganhou! Papel embrulha Pedra.\n");
                    break;
                case 2: // Computador escolheu Papel
                    printf("Empate!\n");
                    break;
                case 3: // Computador escolheu Tesoura
                    printf("Você perdeu! Tesoura corta Papel.\n");
                    break;
            }
            break;
        case 3: // Jogador escolheu Tesoura
            switch(computador) {
                case 1: // Computador escolheu Pedra
                    printf("Você perdeu! Pedra quebra Tesoura.\n");
                    break;
                case 2: // Computador escolheu Papel
                    printf("Você ganhou! Tesoura corta Papel.\n");
                    break;
                case 3: // Computador escolheu Tesoura
                    printf("Empate!\n");
                    break;
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}
