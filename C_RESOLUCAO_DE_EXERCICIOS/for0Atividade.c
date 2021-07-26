#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, numPas,i;

    printf("Digite um numero inteiro e positivo.");
    scanf("%d", &n);
    numPas = n - 1;

    for(i=n; i>0; i--)
    {

        printf("%d patinhos foram passear\n", i);
        printf("Alem das montanhas\n");
        printf("Para brincar\n");
        printf("A mamae gritou: Qua, qua, qua, qua\n");
        printf("Mas so %d patinhos voltaram de la.\n",i-1);
        printf("\n");
    }

    printf("\n A mamae patinha foi procurar\n Alem das montanhas\n Na beira do mar\n A mamae gritou: Qua, qua, qua, qua\n E os %d patinhos voltaram de la\n\n.", n);

    system("pause");

    return 0;
}
