#include <stdio.h>
//Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos
// de uma P.A (Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.
int main()
{
	int num, i, r;
	
	printf("Digite o numero inicial da PA: ");
	scanf("%d",&num);
	
	printf("Digite a razao da PA: ");
	scanf("%d",&r);
	
	for(i=0; i<10; i++)
	{
		printf("%d\n", num);
		num = num + r;
	}
	return 0;
}
