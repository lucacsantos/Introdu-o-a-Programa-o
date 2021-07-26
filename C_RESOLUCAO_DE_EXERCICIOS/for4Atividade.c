#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_alunos;
    float i, soma = 0, nota = 0;

    printf("Entre com a quantidade de alunos da sala \n");
    scanf("%d", &num_alunos);

    for ( i = 1; i - 1 != num_alunos; i++ )
    {
    printf("Entre com as nota do aluno %4.0f: ", i);
    scanf("%f", &nota);
    soma = soma + nota;
    }
    printf("\t Media das notas = %.2f\n\n", soma / num_alunos);

    return 0;

}
