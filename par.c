#include<stdio.h>

int main()
{
    int valor=2;

    while(valor <= 100)
    {
        if(valor%2 == 0)printf("%d\n", valor);
        valor++;
    }
    
    return 0;
}