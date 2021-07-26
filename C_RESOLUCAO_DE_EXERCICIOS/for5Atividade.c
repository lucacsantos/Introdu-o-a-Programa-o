#include <stdio.h>

int main ()
{
    int i, num, maior;

    for ( i =1; i <= 10; i++)
    {
    printf("Entre com 10 numeros inteiros: ");
    scanf("%d", & num);
    if (i == 1)
    {
    maior = num;
    }
    if (num > maior)
    {
    maior = num;
    }
    }

    printf("\t O maior numero e: %d", maior);
    return 0;
}
