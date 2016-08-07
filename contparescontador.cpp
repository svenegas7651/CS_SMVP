#include<stdio.h>
main()
{
      int sum=0,cont=2;
      while(cont<=1000)
      {
       sum= sum+cont;
       cont+=2;
       }
       printf("La suma de los primeros 1000 numeros pares es= %d\n",sum);
}
