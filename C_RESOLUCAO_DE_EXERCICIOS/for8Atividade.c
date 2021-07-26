#include <stdio.h>

int main()
{
        int lado,i;

        printf("Lado do quadrado: ");
        scanf("%d", &lado);

        for(i=1 ; i<=lado; i++)
            printf("*");

        printf("\n");

        for(i=1 ; i<=lado*(lado-2) ; i++)
        {
            if( (i%lado == 1))
                printf("*");
            else
                if( (i%lado == 0))
                    printf("*\n");
                else
                    printf(" ");
        }
        for(i=1 ; i<=lado; i++)
            printf("*");

        printf("\n");
    return 0;

}
