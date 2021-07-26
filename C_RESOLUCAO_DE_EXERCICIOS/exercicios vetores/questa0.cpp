#include <stdio.h>

int main()
{
	// Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, e seu valor.
	int vetor [10], maior=0,i, pos=0;
	
	for(i=0; i< 10; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
		
		if(vetor[i] > maior)
		{
			maior = vetor[i];
			pos = i;
		}
	}
	printf("\n O maior numero e:  %d e a posicao %d",maior,pos);
	
	return 0;
	
}
