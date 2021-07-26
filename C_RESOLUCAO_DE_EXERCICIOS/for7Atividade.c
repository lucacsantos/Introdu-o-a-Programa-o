#include <stdio.h>
#include <stdlib.h>
/*7. Quadrado de asteriscos
Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos. Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
*****
*****
*****
*****
******/

int main()
{
        int lado,i;

        printf("Lado do quadrado: ");
        scanf("%d", &lado);

        for(i=1 ; i<=lado*lado ; i++)
        {
            if(i % lado == 0)
                printf("*\n");
            else
                printf("*");
        }

    return 0;
}
