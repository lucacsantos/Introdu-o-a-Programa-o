#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float altura,imc, peso;
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso/(altura * altura);
    printf("Seu imc e: %f", imc);



    return 0;
}
