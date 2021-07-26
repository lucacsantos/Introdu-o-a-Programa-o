#include <stdio.h>
    /* função para calcular o valor absoluto de um número */
int absoluto( int n)
    {
      if( n < 0 ) 
        return -n;
      else
        return n;
    }

int main()
    {
      int a[5];
		
      printf("Introduza um numero: ");
      for(int i = 0; i < 5; i++ )
      {
      		scanf("%d",&a[i]);
	  }
	  for(int i = 0; i<5; i++)
	  {
	  	printf("O valor absoluto de %d e %d\n", a[i], absoluto(a[i]) );
	  }
	  
      
    }
