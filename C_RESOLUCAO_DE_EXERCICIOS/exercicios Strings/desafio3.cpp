#include <stdio.h>
#include <ctype.h>

//int tamanhoPalavra =0;//uma variavel para verificar o tamanho da palavra.
void palavraMinusculo(char p[])
{

    for(int i=0;p[i]!='\0';i++)
    {
        if( ( p[i] >= 65 ) && ( p[i] <= 90 ) )
            p[i] = p[i] + 32;
    }

}

void fraseMinusculo(char f[])
{
    for(int j=0; f[j]!='\0';j++) //Todas em minusculo
        {
        f[j]=tolower(f[j]);
    }
}
int contadora(char frase[], char palavra[])
{
    int k=0, q=0;                                 //k: indice do vetor palavra; q: quantidade
    for(int i=0;frase[i]!='\0';i++) /**/
    {

        if(frase[i]==palavra[k])
            { 
            k++; // incrementa o índice.
        }else
            k=0;

        if((palavra[k]=='\0') && ((frase[i+1]==32) || (frase[i+1]=='\0') || (frase[i+1]=='\n')))//Se chegou ao fim da verificação, incrementa a quantidade q e reinicia o índice.
            {
                q++;
                k=0;
        }
    }

    return q;
}

int main()
{
    char frase[100], palavra[47];
    int quant=0;  /*q: quantidade de vezes que a palavra aparece */

    printf("Digite uma frase:");
    fgets(frase,100,stdin);

    printf("Digite a palavra a ser buscada:");
    scanf ("%47[^\n]", palavra);

    fraseMinusculo(frase);
    palavraMinusculo(palavra);
    quant=contadora(frase,palavra);

    if(quant==0)
    {
        printf("\nA palavra \"%s\" não aparece na frase.\n",palavra);
    }else
        printf("\nA palavra \"%s\" aparece %d vez(es) na frase.\n",palavra,quant);


return 0;
}
