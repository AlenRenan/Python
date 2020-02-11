#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome [40];
    float nota1;
    float nota2;
    float media,soma,media_final;
    int cont;
     for (cont=0; cont<2;cont++){
        printf ("\n Aluno %d:", (cont+1));
        scanf ("%s", nome);
        scanf ("%f",&nota1);
        scanf ("%f",&nota2);
        media = (nota1 + nota2)/2;
        printf ("%f\n",media);
        soma=soma+media;
     }
     media_final=soma/2;
     printf("%f",media_final);
}




