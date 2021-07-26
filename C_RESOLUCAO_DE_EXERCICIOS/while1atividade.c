#include <stdio.h>

int main()
{
        int numPas,i;

        printf("Quantas patinhos a mamae Pata tem? ");
        scanf("%d", &numPas);

        i = numPas;
        while(i > 1)
        {
            printf("%d patinhos foram passear\n",i);
            printf("Alem das montanhas\n");
            printf("Para brincar\n");
            printf("A mamae gritou: Qua, qua, qua, qua\n");
            printf("Mas so %d patinhos voltaram de la.\n", i-1);

            i--;
        }

        printf("1 patinho foi passear\n");
        printf("Alem das montanhas\n");
        printf("Para brincar\n");
        printf("A mamae gritou: Qua, qua, qua, qua\n");
        printf("Mas nenhum patinho voltou de la.\n\n");

        printf("A mamae patinha foi procurar\n");
        printf("Alem das montanhas\n");
        printf("Na beira do mar\n");
        printf("A mamae gritou: Qua, qua, qua, qua\n");
        printf("E os %d patinhos voltaram de la.\n", numPas);

        return 0;
}
