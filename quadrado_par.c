#include<stdio.h>

int main()
{
    int n, cont;
    scanf("%d", &n);

    for(cont=0;cont<=n;cont++)
    {
        if((cont % 2) == 0 && cont > 0)
        {
            printf("%d^2 = %d\n", cont, (cont*cont));
        }
    }
    return 0;
}