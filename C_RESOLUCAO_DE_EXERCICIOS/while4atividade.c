#include <stdio.h>

int main()
{
        int num,i = 1;

        printf("Digite um numero: ");
        scanf("%d", &num);

        printf("IMPARES \tPARES\n");

        while(i <= num)
        {
            if(i%2 == 1)
                printf("    %d \t",i);
            else
                printf("    \t %d\n", i);

            i++;
        }

        return 0;
}
