#include <stdio.h>
/*Fa�a um programa em C que receba 20 n�meros em um vetor e exiba
apenas os elementos que possuem �ndice �mpar. (�ndice � a posi��o do
vetor onde o elemento est� armazenado. Ex.: vet[1] -&gt; 1 � o �ndice).*/
int main()
{
	int n[20], pos[20];
	
	printf("Digite um numero: ");
	
	for(int i=0; i<20; i++)
	{
		scanf("%d", &n[i]);
		if(n[i] % 2 != 0)
		{
			pos[i] = i;
	
		}else{
			pos[i] = -1;
		}
	}
	for (int y=0; y<20; y++)
	{
		if(pos[y] != -1)
			{
				printf("%d ", pos[y]);
			}
						
			
	}
}
