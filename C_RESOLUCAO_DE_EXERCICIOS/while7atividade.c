#include <stdio.h>

int main(main)
{
        int maior,segundoMaior,num,i=3;

        printf("Digite o numero 1: "); scanf("%d", &maior);
        printf("Digite o numero 2: "); scanf("%d", &num);

        if(maior > num)
            segundoMaior = num;
        else
        {
            segundoMaior = maior;
            maior = num;
        }


        while (i <= 10)
        {
            printf("Digite o numero %d: ",i);
            scanf("%d", &num);

            if(num > maior)
            {
                segundoMaior = maior;
                maior = num;
            }
            else
                if(num > segundoMaior)
                    segundoMaior = num;

            i++;
        }

        printf("Maior: %d\n", maior);
        printf("Segundo maior: %d\n", segundoMaior);

        return 0;
}

