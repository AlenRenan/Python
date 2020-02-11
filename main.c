#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Atribuição de Valores
    float peso;
    float altura;
    float imc;
    float alturaa;
    //Entrada via teclado 1
    printf ("=========================================================");
    printf("\n\nVamos calcular seu imc");
    printf("\n\nInsira sua Altura (Use apenas ponto): ");
    //Entrada via teclado2
        scanf("%f", &altura);
    printf("\n\nInsira seu peso (Use apenas ponto): ");
        scanf("%f", &peso);
    //Cálculo do imc
   imc = peso / (altura * altura);
    ;printf ("\nSeu imc e: %f", imc);
    ;printf ("\n\n=========================================================");
}
