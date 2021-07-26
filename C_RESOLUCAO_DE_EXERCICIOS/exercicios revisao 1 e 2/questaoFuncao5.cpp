#include <stdio.h>
void InverteVetor(int vet[], int tam[10])
{
	
	printf("Digite dez valores : ");
	for(int i = 0; i <= 9; i++)
	{
		
		scanf("%d", &vet[i]);
	} 
	printf("Os numeros inversos sao: ");
	for (int i = 9; i >= 0; i-- )
	{
		printf(" %d", vet[i]);
	}
	
}
void AchaMaior(int vet[], int tam[8])
{
	
		int maior = 0, i;
	printf("\nDigite oito valores: ");
	for(i = 0; i <= 7; i++)
	{
		
		scanf("%d", &vet[i]);
		
		if(vet[i] > maior)
		{
			maior = vet[i];
		}
	}
	printf("O maior numero eh o : %d", maior);
	
}
void Somatorio(int vet[], int tam[15])
{
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
int main()
{
	int vetor[10], tam[10];
	InverteVetor(vetor, tam);
	AchaMaior(vetor, tam);
	Somatorio(vetor, tam);
}
