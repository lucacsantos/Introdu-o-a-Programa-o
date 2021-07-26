#include <stdio.h>

int main()
{
        int total,i = 1;
        float nota,soma=0.0;

        printf("Numero de alunos na sala: ");
        scanf("%d",&total);

        while(i <= total)
        {
            printf("Nota do aluno %d: ",i);
            scanf("%f",&nota);

            soma = soma + nota;

            i++;
        }

        printf("Media da turma: %.2f", soma/total);

        return 0;
}
