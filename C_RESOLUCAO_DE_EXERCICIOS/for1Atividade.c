#include <stdio.h>
#include <stdlib.h>
//1. Programa em C que mostra os números ímpares
//Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100.
int main()
{
  int i;
  printf("Os numeros impares ate 100: \n");
  for(i=1; i<=100;i++)
  {
      //OUTRO JEITO DE FAZER
      //if(i%2 !=0)
      //{

        printf("%d\n",i);

      //}
  }


    return 0;
}
