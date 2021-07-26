#include <stdio.h>

int main()
{
	/* Faça um programa em C: Crie duas strings de mesmo tamanho, peça que o usuário digite uma palavra 
	e armazene na primeira string. O programa deve copiar o conteúdo da primeira para a segunda e exibir o conteúdo delas.*/
	//QUESTAO 1
	char palavra[100],palavra2[100], i;
	
	printf("Dgite uma palavra: ");
	gets(palavra);
	
	for(i=0; palavra[i] != '\0'; i++)
	{
		palavra2[i] = palavra[i];
	}
	printf("A palavra foi: %s", palavra);
	printf("\nA palavra copiada: %s", palavra2);
}
