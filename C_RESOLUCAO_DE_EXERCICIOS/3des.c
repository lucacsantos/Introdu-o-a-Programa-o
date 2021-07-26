#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i, termo1 = 0, termo2 = 1, fbn;

	printf("Digite um numero: \n");
	scanf("%d", &num);

	printf("%d %d", termo1, termo2);
	for(i=0; i<num-2; i++)
	{
		fbn = termo1 + termo2;
		termo1 = termo2;
		termo2 = fbn;

		printf(" %d ", fbn);
	}
	printf("\n\n\n O numero %d e o %d termo na serie de Fibonacci.", fbn,num);
	return 0;
}
