#include <stdio.h>

/* Fa�a um programa em C: Pe�a para o usu�rio digitar uma palavra, guarde-a em uma string.
 O programa deve contar e exibir a quantidade de vogais e consoantes.*/
 //QUEST�O 4
int main()
{
	char str1[50];
	printf("Digite uma palavra: ");
	gets(str1);
	
	int i;
	int vogal = 0; // contados de vogais
	int consoante = 0;
	//calculando o tamanho
	for(i=0; str1[i]!='\0'; i++)
	{
		if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u') //s� minusculas
		{
			vogal++;
		}
		else if(str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U') //s� maiusculas
		{
			vogal++;
		}
		else{
			consoante++;
		}
		
	}
	printf("A palavra %s tem %d vogais e %d consoantes!", str1, vogal, consoante);	
}
