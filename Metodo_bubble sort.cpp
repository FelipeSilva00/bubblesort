#include <stdio.h>
#include <stdlib.h>
#define i 7

main()
{
  int vetor[i],
      x = 0,
      y = 0,
      aux = 0;      
  
  for( x = 0; x < i; x++ ) 
  {
    printf("Entre com um numero inteiro para vetor: ",x);
    scanf("%d",&aux);
    vetor[x] = aux;
  }
  
  // coloca em ordem crescente (1,2,3,4,5...)  
  for( x = 0; x < i; x++ )
  {
    for( y = x + 1; y < i; y++ ) // sempre 1 elemento à frente
    {
      // se o (x > (x+1)) então o x passa pra frente (ordem crescente)
      if ( vetor[x] > vetor[y] )
      {
         aux = vetor[x];
         vetor[x] = vetor[y];
         vetor[y] = aux;
      }
    }
  } // fim da ordenação
  
  // exibe elementos ordenados   
  printf("\n Elementos ordenados (Ordem Crescente):\n");
  
  for( x = 0; x < i; x++ )
  {
    printf(" vetor %d = [%d]\n",x,vetor[x]); // exibe o vetor ordenado
  }  
  
  // coloca em ordem decrescente (10,9,8,7...)
  for( x = 0; x < i; x++ )
  {
    for( y = x + 1; y < i; y++ ) // sempre 1 elemento à frente
    {
      if ( vetor[y] > vetor[x] )
      {
         aux = vetor[y];
         vetor[y] = vetor[x];
         vetor[x] = aux;
      }
    }
  } // fim da ordenação
  
  // exibe elementos ordenados
  printf("\n \n \n Elementos ordenados (Ordem Decrescente):\n");
  
  for( x = 0; x < i; x++ )
  {
    printf(" vetor %d = [%d]\n",x,vetor[x]); // exibe o vetor ordenado
  }
 
  System("pause");
}

