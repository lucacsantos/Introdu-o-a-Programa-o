#include <stdio.h>
#include <stdlib.h>

/*Crie um aplicativo em C que peça um número inteiro ao usuário N e exiba o n-ésimo termo da série de
Fibonacci, sabendo que o primeiro termo é 0, o
segundo é 1 e o próximo número é sempre a soma dos dois anteriores.
Ex.: 0 1 1 2 3 5 8... Se o usuário digitar 4 o elemento da 4ª posição é o 2.*/
int main()
{
    int n,i,enesimo, num1 = 0, num2 = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);
    //enesimo = num1 + num2;
    printf("%d %d", num1, num2);
    for(i=3; i<=n; i++)
    {
             enesimo = num1 + num2;
             num1 = num2;
             num2 = enesimo;


             printf(" %d ",enesimo);
    }

    system("pause");
    return 0;
}

