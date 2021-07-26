#include <stdio.h>
#include <locale.h>
int main(void)
{
    int cep, telefone;
    char nome[100],sobrenome[100], endereco[100];

    printf("Seu primeiro nome: ");
    scanf("%s", nome);

    printf("Seu ultimo sobrenome: ");
    scanf("%s", sobrenome);

    printf("Qual e o seu endereco: ");
    scanf(" %s", &endereco);
    fflush(stdin);
    printf("Qual o seu CEP: ");
    scanf(" %d", &cep);
    fflush(stdin);

    printf("Qual seu telefone: ");
    scanf(" %d", &telefone);

    printf("Nome: %s \n", nome,sobrenome);
    printf("Endereco: %s\n", endereco);
    printf("CEP : %d",cep);
    printf("Telefone: %d", telefone);
    return 0;

}
