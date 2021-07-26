#include <stdio.h>

int main()
{
        int lado,i=1;

        printf("Lado do quadrado: ");
        scanf("%d", &lado);

        while(i <= lado*lado)
        {
            if(i % lado == 0)
                printf("*\n");
            else
                printf("*");

            i++;
        }

    return 0;
}

