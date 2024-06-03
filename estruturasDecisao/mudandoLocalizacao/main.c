#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"PORTUGUESE");//aqui ele muda a região para que todo o código fique em português do Brasil.
printf("\n****** Verificando a localidade corrente ********\n\n");
printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
printf("Não é possível usar acentuação ou ç corretamente…\n\n");
printf("\n****** Alterando para a localidade do sistema ********\n\n");
//alterando para o padrão do sistema operacional
printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));
printf("Agora não tem mais problema algum!\n");
printf("Já posso usar acentuação e também o caracter ç…\n\n\n");
}
