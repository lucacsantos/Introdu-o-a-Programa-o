#include <stdio.h>

int main()
{
        int num,i;

        printf("Digite um numero: ");
        scanf("%d", &num);

        for(i=1 ; i<=10 ; i++){
            printf("%d * %d = %d\n", num, i, num*i);
        }
        //i = 0;
        for(i=1; i<=10; i++)
        {
            printf("%d + %d = %d\n", num, i, num+i);

        }
        for(i=1; i<=10; i++)
        {
            printf("%d - %d = %d\n", num, i, num-i);
        }
        for(i=1; i<=10; i++)
        {
            printf("%d / %d = %f\n", num, i, num/i);
        }

        return 0;
}
