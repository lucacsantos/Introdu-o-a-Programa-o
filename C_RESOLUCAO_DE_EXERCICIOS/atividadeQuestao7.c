#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("ALUNO(A)      NOTA\n =========== ======\nALINE         9.0\nMÁRIO         DEZ\nSÉRGIO        4.5\n"
               "SHIRLEY       7.0");
    return 0;
}
