#include <stdio.h>

int main()
{
	// Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o menor, e seu valor.
	int vetor [10], menor=10000,i,pos=0;
	
	for(i=0; i<10; i++)
	{
		printf("Digite um valor: ",i+1);
		scanf("%d", &vetor[i]);
		//menor = vetor[i]; 
		if(vetor[i] < menor)
		{
			menor = vetor[i];
			pos = i;
		}
	}
	printf("\n O menor numero e:  %d e a posicao %d ",menor,pos);
	
}
