#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <LinkedListStack.h>

int main()
{

    int tamanho;
    struct noh *inicio=NULL;

   empilhar(&inicio,2,&tamanho);
   empilhar(&inicio,3,&tamanho);
   empilhar(&inicio,4,&tamanho);
   empilhar(&inicio,5,&tamanho);
   empilhar(&inicio,6,&tamanho);
   desempilhar(&inicio,&tamanho);
   //printf("%d\n",tamanho);
   imprimirPilha(&inicio);
   return 0;
}
