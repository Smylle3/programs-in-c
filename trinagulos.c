#include <stdio.h>

int main()
{
    double a, b, c, aux;

    scanf("%lf %lf %lf", &a, &b, &c);

    if((c>=a && c>=b && b>=a) || (c>=a && c>=b && a>=b))
    {
        aux=a;
        a=c;
        c=aux;
    }
    else if((b>=a && b>=c && c>=a) || (b>=a && b>=c && a>=c))
    {
        aux=a;
        a=b;
        b=aux;
    
    }

    if(a >= (b+c))
    {   
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((a*a) == (b*b) + (c*c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if((a*a) < (b*b)+(c*c))
    {
        printf("TRIANGULO ACUTANGULO\n");
        if((a == b) && (a == c) && (c== b))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(((a == b) && (a != c) && (b !=c )) || ((a == c) && (a != b) && (b !=c )) || ((b==c) && (b != a) && (b != c )))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if((a*a) > (b*b)+(c*c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if((a == b) || (a == c) || (b ==c ))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
        else if((a == b) && (a == c) && (c == b))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
    }
    
    return 0;
}