#include <stdio.h>

int main()
{
        int lado,i=1;

        printf("Lado do quadrado: ");
        scanf("%d", &lado);

        while(i<=lado)
        {
            printf("*");
            i++;
        }
        printf("\n");

        i=1;
        while(i <= lado*(lado-2))
        {
            if( (i%lado == 1))
                printf("*");
            else
                if( (i%lado == 0))
                    printf("*\n");
                else
                    printf(" ");

            i++;
        }

        i=1;
        while(i<=lado)
        {
            printf("*");
            i++;
        }
        printf("\n");

    return 0;
}
