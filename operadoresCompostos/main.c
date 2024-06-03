#include <stdio.h>
#include <stdlib.h>

void main()
{
    float nota1=8.5, nota2=9.0;
    float media;

    media = nota1 + nota2;
    media /= 2;

    printf("%.1f e a media das notas %.1f e %.1f", media, nota1, nota2);
}
