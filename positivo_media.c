#include<stdio.h>

int main()
{
    float valor[6], media=0;
    int cont, aux =0;

    for(cont = 0; cont<6;cont++)
    {
        scanf("%f", &valor[cont]);
        if(valor[cont] > 0)
        {   
            media += valor[cont];
            aux++;
        }
    }
    media = media / aux;
    printf("%d valores positivos\n%.1f\n", aux, media);
    return 0;
}