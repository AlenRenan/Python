#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome [40];
    float nota1;
    float nota2;
    float media;

    printf ("Qual o seu nome?: ");
    scanf ("%s", nome);

    printf ("Qual sua primeira nota?: ");
    scanf ("%f", &nota1);

    printf ("Qual a sua segunda nota?:");
    scanf ("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf ("\n%s sua media e: %f", nome, media);

    if (media > 5)
      printf ("\nVoce foi Aprovado");
      if (media > 8){
        printf ("com Louvor !!!");
      }
     else
        printf ("\nVoce foi Reprovado");

}









