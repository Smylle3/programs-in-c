#include<stdio.h>

int main()
{
    int valor, cont, aux=0;

    printf("Digite um numero\n", cont);
    scanf("%d", &valor);
    cont = valor;

    while(aux < 6)
    {
        if(cont % 2 != 0)
        {
            printf("%d\n", cont);
            aux++;
        }
        cont++;
    }
    return 0;
}