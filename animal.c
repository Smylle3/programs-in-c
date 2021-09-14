#include<stdio.h>
#include<string.h>

int main()
{
    char string[20];

    scanf("%s", string);
    if(strncmp(string, "vertebrado", 10) == 0)
    {
        scanf("%s", string);
        if(strncmp(string, "ave", 3) == 0)
        {
            scanf("%s", string);
            if(strncmp(string, "carnivoro", 9) == 0) printf("aguia\n");
            else if(strncmp(string, "onivoro", 7) == 0) printf("pomba\n");
        }
        else if(strncmp(string, "mamifero", 8) == 0)
        {
            scanf("%s", string);
            if(strncmp(string, "onivoro", 7) == 0) printf("homem\n");
            else if(strncmp(string, "herbivoro", 9) == 0) printf("vaca\n");
        }
    }
    else if(strncmp(string, "invertebrado", 12) == 0)
    {
        scanf("%s", string);
        if(strncmp(string, "inseto", 6) == 0)
        {
            scanf("%s", string);
            if(strncmp(string, "hematofago", 10) == 0) printf("pulga\n");
            else if(strncmp(string, "herbivoro", 9) == 0) printf("lagarta\n");
        }
        else if(strncmp(string, "anelideo", 8) == 0)
        {
            scanf("%s", string);
            if(strncmp(string, "hematofago", 10) == 0) printf("sanguessuga\n");
            else if(strncmp(string, "onivoro", 7) == 0) printf("minhoca\n");
        }
    }
    return 0;
}