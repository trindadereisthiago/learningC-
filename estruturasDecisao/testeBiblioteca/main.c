#include<stdio.h>
#include<string.h>

void main() {
char nome[200] = "Fulano";
char sobrenome[200];
char resultado[200];
strcpy(sobrenome," da Silva");
strcpy(resultado, nome);
strcat(resultado, sobrenome);
printf("%s\n", resultado);
int tamanho = strlen(nome);
printf("Tamanho: %d\n", tamanho);
}
