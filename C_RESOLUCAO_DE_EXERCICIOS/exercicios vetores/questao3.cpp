#include <stdio.h>
//Crie um aplicativo em C que pe�a um n�mero inicial ao usu�rio, uma raz�o e calcule os termos
// de uma P.A (Progress�o Aritm�tica), armazenando esses valores em um vetor de tamanho 10.
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
