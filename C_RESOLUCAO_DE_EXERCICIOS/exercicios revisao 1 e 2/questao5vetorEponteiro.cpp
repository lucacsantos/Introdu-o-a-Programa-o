#include <stdio.h>
/*Fa�a um programa em C que receba um n�mero, exiba o valor e o
endere�o do n�mero utilizando um ponteiro.*/
int main()
{
	int numero ;
	int *numeroPtr = &numero;
	
	printf("insira um valor: ");
	scanf("%d", &numero);
	printf("Imprimindo o endereco no primeiro elemento: %d\n",numeroPtr);
	
	return 0;
}
