#include <stdio.h>
#include <stdlib.h>
//TESTES IF, ELSE, SWITCH CASE
int main ()
{
    int idade;


    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 18)
    {
        printf("Voce e menor de idade.\n");
    }
    else if(idade > 800)
    {
        printf("Voce e uma mumia\n");
    }
    else
    {
        printf("Voce e maior de idade\n");
    }
    system("pause");
    return 0;
}
