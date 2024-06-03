#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i= 10;
    int j= 2;
    int x= 0;
    int y= 0;

    j++;
    ++i;

    printf("step1 %d %d;\n", j, i);

    x = i++ + j;

    printf("step2 %d %d;\n", j, i);

    printf("x = %d\n", x);

    y = ++j + ++i;
    printf("step3 %d %d;\n", j, i);

    printf("y = %d\n", y);
}
