#include<stdio.h>

int main()
{
    int valor[5];
    int cont, aux =0;

    for(cont = 0; cont<5;cont++)
    {
        scanf("%d", &valor[cont]);
        if(valor[cont] % 2 == 0)
        {   
            aux++;
        }
    }

    printf("%d valores pares\n", aux);
    return 0;
}