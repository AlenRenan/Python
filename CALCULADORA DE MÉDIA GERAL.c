#include <stdio.h>
#include <stdlib.h>

int main(){
//Atribuição de valores
    char nome [40];
    float nota1;
    float nota2;
    float media,soma,mediaG;
//Repetição 'int'
    int cont;
     for (cont=0; cont<10;cont++){
        printf ("\n Aluno %d: ", (cont+1));
        scanf ("%s", nome);
        printf ("\n Nota 1: ");
        scanf ("%f",&nota1);
        printf ("\n Nota 2: ");
        scanf ("%f",&nota2);
        media = (nota1 + nota2)/2;
//Cálculo da média geral
        soma=soma+media;
     }
     mediaG=soma/2;
     printf("A media geral e: %f",mediaG);

}




