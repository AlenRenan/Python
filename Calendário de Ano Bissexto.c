#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    int divisao1;
    int divisao2;
    int bano;

    printf ("\nInsira o ano: ");
        scanf ("%d", &ano);

    divisao1 = ano % 4;
    divisao2 = ano % 100;

    if (divisao1 <= 0){
        printf ("\nO ano de %d e um ano bissexto", ano);
    if (divisao2 <= 0){
        printf ("\nO ano de %d e um ano bissexto", ano);
    }
    }
    else
        printf ("\n o ano de %d nao e um ano bissexto", ano);
    }
//Renan Alencar
