#include <stdio.h>

void maiusculo(char palav[])//para fazer tudo maiusculo
{
    for(int i=0; palav[i]!='\0'; i++)
    {
        if((palav[i] >= 97 ) && ( palav[i] <= 122) )
            palav[i] = palav[i]-32;
    }
}

void cripto(char *palav)//criptografar a palavara ou frase
{
    int i=0;
    for(i=0; palav[i]!='\0';i++)
    {
       if((palav[i]!=32) && (palav[i]>=65) && (palav[i]<=90)) 
        {
            palav[i]=palav[i]+3;
        }

        if((palav[i]>90) && (palav[i]<94)) //maior 90 e menor 94
        {
            palav[i]=palav[i]-26;
        }
    }

    printf("\nFrase criptografada: %s",palav);
}

int main(void)
{
    char palav[100];
    printf("Digite uma palavra ou uma frase: ");
    fgets(palav,100,stdin);

    maiusculo(palav);
    cripto(palav);

    return 0;
}
