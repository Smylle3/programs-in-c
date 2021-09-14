#include<stdio.h>
#include<string.h>

int main()
{
    float imposto, valor;

    scanf("%f", &imposto);
    
    if(imposto <= 2000.00)
    {
        printf("Isento\n");
    }
    else if(imposto > 2000.01 && imposto < 3000.00)
    {
        valor = (imposto*8)/100;
        printf("R$ %.2f\n", valor);
    }
    else if(imposto > 3000.01 && imposto < 4500.00)
    {
        valor = (imposto*18)/100;
        printf("R$ %.2f\n", valor);
    }
    else if(imposto > 4500.00)
    {
        valor = (imposto*28)/100;
        printf("R$ %.2f\n", valor);
    }
    return 0;
}