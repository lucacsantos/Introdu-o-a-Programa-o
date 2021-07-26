#include <stdio.h>
/*Faça um programa em C que receba 20 números em um vetor e exiba
apenas os elementos que possuem índice ímpar. (índice é a posição do
vetor onde o elemento está armazenado. Ex.: vet[1] -&gt; 1 é o índice).*/
int main()
{
	int n[20], pos[20];
	
	printf("Digite um numero: ");
	
	for(int i=0; i<20; i++)
	{
		scanf("%d", &n[i]);
		if(n[i] % 2 != 0)
		{
			pos[i] = i;
	
		}else{
			pos[i] = -1;
		}
	}
	for (int y=0; y<20; y++)
	{
		if(pos[y] != -1)
			{
				printf("%d ", pos[y]);
			}
						
			
	}
}
