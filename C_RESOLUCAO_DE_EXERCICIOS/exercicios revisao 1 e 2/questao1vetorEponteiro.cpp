#include <stdio.h>

int main()
{
	int vet[10];
	
	for(int i = 0; i <= 9; i++)
	{
		printf("Digite um valor : ");
		scanf("%d", &vet[i]);
	} 
	printf("Os numeros inversos sao: ");
	for (int i = 9; i >= 0; i-- )
	{
		printf(" %d", vet[i]);
	}
	
	return 0;
}
