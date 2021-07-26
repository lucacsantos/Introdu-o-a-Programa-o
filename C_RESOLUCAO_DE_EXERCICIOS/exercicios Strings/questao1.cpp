#include <stdio.h>

/*Faça um programa em C: Crie duas strings de mesmo tamanho, peça que o usuário digite uma palavra e armazene na primeira string. 
A segunda string deve receber o conteúdo da primeira de forma invertida. Ex.: string 1 = "Amor" - string 2 = "romA".*/
//QUESTAO 2
int main()
{
	char palavra[100], pInvertida[100], i,j,tam=0;
	printf("Dgite uma palavra: ");
	gets(palavra);
	
	for(i=0; palavra[i] != '\0'; i++)
	{
		tam++;
	}
	
	for(i=tam; i>=0; i--)
	{
		pInvertida[i] = palavra[(tam-1)-i];
		j++;
	}
	pInvertida[tam] = '\0';
	
	printf("palavra: %s\n",palavra);
	printf("palavra invertida: %s", pInvertida);
	
	return 0;
}
