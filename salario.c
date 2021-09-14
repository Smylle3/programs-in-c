#include<stdio.h>

int main()
{
    float salario, novo_salario, reaguste, percentual;

    scanf("%f", &salario);

    if(salario >= 0 && salario <= 400.00)
    {
        percentual = 15;
        reaguste = (salario * percentual)/100;
        novo_salario = reaguste + salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", novo_salario, reaguste, percentual);
    }
    else if(salario >= 400.01 && salario <= 800.00)
    {
        percentual = 12;
        reaguste = (salario * percentual)/100;
        novo_salario = reaguste + salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", novo_salario, reaguste, percentual);
    }
    else if(salario >= 800.01 && salario <= 1200.00)
    {
        percentual = 10;
        reaguste = (salario * percentual)/100;
        novo_salario = reaguste + salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", novo_salario, reaguste, percentual);
    }
    else if(salario >= 1200.01 && salario <= 2000.00)
    {
        percentual = 7;
        reaguste = (salario * percentual)/100;
        novo_salario = reaguste + salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", novo_salario, reaguste, percentual);
    }
    else if(salario > 20000)
    {
        percentual = 4;
        reaguste = (salario * percentual)/100;
        novo_salario = reaguste + salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", novo_salario, reaguste, percentual);
    }
    return 0;
}