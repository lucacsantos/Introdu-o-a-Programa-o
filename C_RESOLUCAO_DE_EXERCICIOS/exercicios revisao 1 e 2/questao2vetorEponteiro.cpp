#include <stdio.h>
/*Faça um programa em C que receba 8 números em um vetor e depois
mostre qual é o maior elemento entre eles.*/
int main()
{
	int num[8], maior = 0, i;
	
	for(i = 0; i <= 7; i++)
	{
		printf("Entre com um valor: ");
		scanf("%d", &num[i]);
		
		if(num[i] > maior)
		{
			maior = num[i];
		}
	}
	printf("O maior numero eh o : %d", maior);
}

