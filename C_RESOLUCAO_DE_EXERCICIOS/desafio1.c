#include <stdio.h>
#include <stdlib.h>

/*Crie um programa em C que pe�a um n�mero inteiro ao usu�rio, e imprima a seguinte
tabela:
1
2 4
3 6 9
4 8 12 16
...
Nesse caso o n�mero digitado foi 4.*/

int main()
{
    int num, i,j, mult;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
       for(j=1; j<=i; j++)
        {
            mult = i*j;
            printf("%d ", mult);
        }
        printf("\n");
    }
    return 0;

}
