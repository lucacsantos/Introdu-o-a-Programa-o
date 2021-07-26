#include<stdio.h>
int main()
{
/*	faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
*/
	char str[200];//declarei uma string str para pegar a palavra digitada
	char L1,L2;//declarei aqui para pegar as duas letras
	int i;//para ser o incremento
	printf("Digite uma palavra: ");
	gets(str);

	printf("A letra a ser substituida: ");
	scanf("%c", &L1);
	
	fflush(stdin);//pra esperar a proxima 
	
	printf("A letra que ira substituir: ");
	scanf("%c", &L2);
	
	for(i=0; str[i]!= '\0'; i++)
	{
		if(str[i]==L1)
		{
			str[i]=L2;
		}
	}
	//str[i] = '\0';
	printf("resultado da substituicao: %s ",str);
}
