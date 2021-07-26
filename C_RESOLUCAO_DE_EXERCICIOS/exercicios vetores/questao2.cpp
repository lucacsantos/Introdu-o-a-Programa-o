#include <stdio.h>
//Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, qual é o menor e que seus valores.
int main()
{
	int num[10];
	int i,j, maior=1, menor =10000;
	
	for(i=1; i< 10; i++)
	{
	  for(i=0; i<10; i++)
		{
			printf("Digite um valor: ",i+1,j+1);
			scanf("%d", &num[i]);
			//menor = vetor[i]; 
			if(num[i] < menor)
			{
				menor = num[i];
			}
			else
			{
				maior = num[i];
			}
		}
		
	}
	printf("O maior e o menor %d %d", maior, menor);
}
