#include <stdio.h>
// Crie um aplicativo em C que pe�a um n�mero inicial ao usu�rio, uma raz�o
// e calcule os termos de uma P.G (Progress�o Geom�trica), armazenando esses valores em um vetor de tamanho 10.
int main()
{
	int num, i, razao;
	
	printf("Digite o numero inicial da PG: ");
	scanf("%d",&num);
	
	printf("Digite a razao da PG: ");
	scanf("%d",&razao);
	
	for(i=0; i<10; i++)
	{
		printf("%d\n", num);
		num = num*razao;
	}
	return 0;
}
