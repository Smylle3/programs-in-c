#include<stdio.h>

int main()
{
    int h1, m1, h2, m2, aux, aux2;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if(h1 < h2)
    {
        if(m1 < m2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2-h1), (m2-m1));
        }
        else if(m1 > m2)
        {
            aux = 60-m1+m2;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2-h1)-1, aux);
        }
        else if(m1 == m2)
        {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", (h2-h1));
        }  
    }
    else if(h1 == h2)
    {
        if(m1 < m2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (h2-h1), (m2-m1));
        }
        else if(m1 > m2)
        {
            aux = 60-m1+m2;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 23, aux);
        }
        else if(m1 == m2)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
    }
    else if(h1 > h2)
    {
        aux2 = 24-h1+h2;
        if(m1 < m2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", aux2, (m2-m1));
        }
        else if(m1 > m2)
        {
            aux = 60-m1+m2;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", aux2-1, aux);
        }
        else if(m1 == m2)
        {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", aux2);
        }
    }
    return 0;
}