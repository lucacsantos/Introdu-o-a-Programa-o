#include <stdio.h>

int main()
{
    int idade;
    float altura;//numero real tem o double tbm
    char sexo;//eesse e o de baixo é o mesmo
    char nome[10];

    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("Digite seu sexo:(M) ou (F)");
    scanf(" %c",&sexo);
    fflush(stdin);
    printf("Digite seu nome:");
    gets(nome);

    printf("Nome: %s", nome);
    printf("Idade: %d",idade);
    printf("Altura: %f",altura);
    printf("Sexo: %c", sexo);

    return 0;

}
