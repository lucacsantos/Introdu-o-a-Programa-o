#include <stdio.h>
#include <stdlib.h>
/*2. Programa em C que mostra os números pares
Escreva um aplicativo em C mostra todos os números pares de 1 até 100.*/

int main()
{
    int i;
    printf("Os numeros pares ate 100: \n");
    for(i=0; i<=100; i+=2)
    {
        // OUTRO JEITO DE FAZER if(i%2 ==0)
        //{
            printf("%d\n",i);
        //}

    }



    return 0;
}
