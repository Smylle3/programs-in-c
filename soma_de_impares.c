#include<stdio.h>

int main()
{
    int x, y, cont, aux=0;

    scanf("%d %d", &x, &y);
    if(x>y)
    {
        aux=x;
        x=y;
        y=aux;
        aux=0;
    }

    for(cont=x;cont<y;cont++)
    {
        if(cont %2 != 0){
            aux += cont;
        }
    }
    printf("%d\n", aux);
    return 0;
}