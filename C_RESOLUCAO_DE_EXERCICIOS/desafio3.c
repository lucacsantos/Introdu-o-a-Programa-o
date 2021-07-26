#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, linha, espaco,i, asterisco;

    printf("Digite um numero inteiro e impar: ");
    scanf("%d", &num);

    if(num %2 != 0)
    {   //CIMA
        asterisco = 1;
        espaco = (num-1)/2;

        for(linha=1; espaco > 0; linha++)
        {
            for(i = 1; i <= espaco; i++)
             printf(" ");

            for(i = 1; i <= asterisco; i++)
             printf("*");

             espaco--;
             asterisco += 2;
             printf("\n");
        }

        for(linha=1 ; asterisco > 0 ; linha++)
            {

                //AQUI VAI O ESPACO
                for(i = 1 ; i <= espaco ; i++)
                    printf(" ");

                //AQUI VAI O ASTERISCO
                for(i = 1 ; i <= asterisco ; i++)
                    printf("*");

                espaco++;
                asterisco -= 2;
                printf("\n");

            }

        }

        else{
            printf("Nao e um numero impar\n");
        }
        system("pause");
        return 0;

    }
