#include<stdio.h>

int main()
{
    int valor, cont;

    scanf("%d", &valor);

    for(cont=0;cont <= valor;cont++)
    {
        if(cont % 2 != 0)printf("%d\n", cont);
    }
    return 0;
}