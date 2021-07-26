#include <stdio.h>

int main()
{
        int maior=0,num,i=1;

        while (i <= 10)
        {
            printf("Digite o numero %d: ",i);
            scanf("%d", &num);

            if( num > maior)
                maior=num;

            i++;
        }

        printf("Maior: %d", maior);

        return 0;
}
