#include <stdio.h>

/*Faça um programa em C: Crie duas strings de mesmo tamanho, peça que o usuário digite
duas palavras, armazene uma em cada string. O programa deve comparar as duas palavras e informar se são iguais ou diferentes.*/
//QUESTAO 3
int main()
{
	char str1[100], str2[100];
	printf("Digite a primeira palavra: ");
	gets(str1);

	printf("Digite a segunda palavra: ");
	gets(str2);
	
	int i, tam1=0, tam2=0;
	
	for(i=0; str1[i]!='\0'; i++)
	{
		tam1++;
	}
	for(i=0; str2[i]!='\0'; i++)
	{
		tam2++;
	}
	
	if(tam1!=tam2)
	{
		printf("Diferentes");
	}
	else
	{
		
		int teste=0; 
		for(i=0; i<tam1; i++)
		{
			if(str1[i]!=str2[i])
			{
				teste = 1;
			}
		}
		
		if(teste == 1)
		{
			printf("Diferentes");
		}
		else
		{
			printf("iguais");
		}
	}

	
}
