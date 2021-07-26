#include <stdio.h>
#define TAM 3
/*Faça um programa em C que receba 3 números e identifique o maior e o
menor. (Utilize um vetor para armazenar os 3 números e dois ponteiros,
um para apontar para o maior e outro para apontar para o menor).*/
int main()
{
	int num[TAM];
	int maior =0;
	int menor =10000;
	int *ptrMaior = &maior;
	int *ptrMenor = &menor;
	printf("Digite tres numeros: ");
	for(int i=0; i <TAM; i++)
	{
		scanf("%d",&num[i]);
		
		if(num[i] > maior )
		{
			maior = num[i];
		}
		if(num[i]< menor)
		{
			menor = num[i];
		}	
	}	
	printf("o maior e o menor sao: %d e %d ", maior,menor);
}

