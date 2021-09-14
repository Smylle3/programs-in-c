#include<stdio.h>

int main()
{
    float valor[6];
    int cont, aux =0;

    for(cont = 0; cont<6;cont++)
    {
        scanf("%f", &valor[cont]);
        if(valor[cont] > 0)aux++;
    }

    printf("%d valores positivos\n", aux);
    return 0;
}