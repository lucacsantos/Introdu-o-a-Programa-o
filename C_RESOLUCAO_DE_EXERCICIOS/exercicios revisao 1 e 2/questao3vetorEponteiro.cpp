#include <stdio.h>
int main()
{
	int vet[15];
	int soma = 0, i;
	printf("\nDigite catorze valores: ");
	for(i=0; i<=14; i++)
	{
		
		scanf("%d",&vet[i]);
		
	}
	for(i = 0; i<=14; i++)
		{
			soma += vet[i];
		}
	printf("Soma de todos os numeros digitados: %d ", soma);
	
}
