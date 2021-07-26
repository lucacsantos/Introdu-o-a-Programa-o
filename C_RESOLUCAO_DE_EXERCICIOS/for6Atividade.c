#include <stdio.h>

int main ()
{
    int n1,n2,n3,n4,i;

    for(i=1; i<=10; i++)
    {
    n4=n1;
    printf("insira o %d numero: ",i);
    scanf("%d",&n1);
    if (n1>n2)
    {
    n2=n1;
    n3=n4;
    }
    if (n1>n3 && n1<n2)
    n3=n1;

    }
    printf("o maior numero e %d, e o segundo maior %d",n2,n3);

    return 0;
}
