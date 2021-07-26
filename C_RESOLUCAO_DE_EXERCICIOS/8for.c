#include <stdio.h>
#include <stdlib.h>

int main()
{
        int lado,i,j;

        printf("Lado do quadrado: ");
        scanf("%d", &lado);

        for(i=1; i<=lado; i++)
        {
            for(j=1; j<=lado; j++)
            {
                if(i==1 || i==lado)
                {
                    printf("*");
                }
                else if(j==1 || j==lado)
                {

                    printf("*");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }


    return 0;
}

