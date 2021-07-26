#include <stdio.h>

void menu ()
{
	printf("-------MENU-------\n");
	printf("A - Calcular Media Aritmetica\n");
	printf("P - Calcular Media Ponderada\n");
}
float MAritimetica(float n1, float n2, float n3)
{
	float mediaA;

	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
		mediaA = (n1+n2+n3)/3;
	printf("A media eh : %.2f", mediaA);
	return mediaA;
}
float MPonderada(float n1, float n2, float n3)
{
	 int p1, p2, p3;
	float mediaB;
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite o peso da primeira nota: ");
	scanf("%d", &p1);
	printf("Digite o peso da segunda nota: ");
	scanf("%d", &p2);
	printf("Digite o peso da terceira nota: ");
	scanf("%d", &p3);
	
	mediaB = (p1*n1 + p2*n2 + p3*n3) /(p1+p2+p3);
	printf("A media eh : %.2f", mediaB);
	return mediaB;
}

int main()
{
	float n1, n2, n3;
	int p1, p2,p3;
	char escolha; 
	//printf("A - Calcular Media Aritmetica\n");
	//printf("P - Calcular Media Ponderada\n");
	
	menu();
	printf("Escolha uma opcao do menu: ");
	scanf("%c", &escolha);
	
	switch(escolha)
	{
		case 'A':
			MAritimetica(n1,n2,n3);
			break;
		case 'P': 
			MPonderada(n1,n2,n3);
			break;	
		default:
			printf("Opcao valida");
	}
}
