#include <stdio.h>

int potencia(int base, int expoente)
{
	int res = 1;
	if(expoente >= 1)
	{
		int i = 1;
		for(i;i<= expoente;i++){
			res *= base; 
		}
	}
	else
	{
		printf("Digite um expoente maior ou igual a 1!");
	}
	return res;
}

int main ()
{
	int b, e, res;
	
	printf("Digite a base: ");
	scanf("%d", &b);
	
	printf("Digite o expoente: ");
	scanf("%d", &e);
	
	res = potencia(b,e);
	printf("%d elevado %d eh igual a %d\n", b,e,res);
	
	return 0;
}
