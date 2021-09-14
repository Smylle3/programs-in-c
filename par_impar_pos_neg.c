#include<stdio.h>

int main()
{
    int valor[5];
    int cont, par =0, impar =0, neg=0, pos=0;

    for(cont = 0; cont<5;cont++)
    {
        scanf("%d", &valor[cont]);
        if(valor[cont] % 2 == 0)par++;
        else if(valor[cont] % 2 != 0)impar++;
        if(valor[cont] > 0)pos++;
        else if(valor[cont] < 0)neg++;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, pos, neg);
    return 0;
}