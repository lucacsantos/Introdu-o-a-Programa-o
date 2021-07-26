#include <stdio.h> 

#include <stdlib.h> 
int main ()
{ 
	int num[10], i, numDigitado, consta,j;
	
	for (i=0; i<10; i++) 
	{ 
		num[i] = rand() % 10000 + 1; 
	do 
	{ 
		consta = 1; 
		for (j=0; j<i; j++) 
		if (num[i] == num[j]) 
		{ 
			num[i] = rand() % 10000 + 1; 
			consta = 0; 
		} 
	} while (consta == 0); 
	
	} 
	printf("Informe um numero entre 1 e 10.000: "); 
	scanf("%d", &numDigitado); 
	i=0; 
	while ((i<10) && (num[i] != numDigitado)) 
	i++; 
	if (i < 10) 
	{
		printf("%d encontra-se na posicao %d do vetor\n", numDigitado, i); 
	}
	else
	{
		printf("%d nao existe no vetor\n", numDigitado);	
	} 
	 
	return 0; 
}
