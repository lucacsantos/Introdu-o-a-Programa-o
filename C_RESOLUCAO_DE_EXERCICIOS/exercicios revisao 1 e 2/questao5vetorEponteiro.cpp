#include <stdio.h>
/*Faça um programa em C que receba um número, exiba o valor e o
endereço do número utilizando um ponteiro.*/
int main()
{
	int numero ;
	int *numeroPtr = &numero;
	
	printf("insira um valor: ");
	scanf("%d", &numero);
	printf("Imprimindo o endereco no primeiro elemento: %d\n",numeroPtr);
	
	return 0;
}
