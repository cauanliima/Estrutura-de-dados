#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#define INIT_VAL_DEF 10

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




void inicializar(int ** pilha,int capacidade)
{
    *pilha = (int*)calloc(capacidade,sizeof (int));


}

void duplicar(int **pilha,int *capacidade){
    *capacidade=(*capacidade)*2;
    *pilha=(int*)realloc(*pilha,2*(*capacidade)*sizeof(int));
}

void empilhar(int **pilha,int N,int *tamanho,int *capacidade){
    if((*pilha)==nullptr)
        inicializar(pilha,INIT_VAL_DEF);

    if(*tamanho==*capacidade)
        duplicar(pilha,capacidade);

    *(*pilha+ *tamanho)=N;
   (*tamanho)++;
}

void desempilhar(int *tamanho){
   (*tamanho)--;
}

int desempilharRetornando(int **pilha,int *tamanho){
   desempilhar(tamanho);
    return *(*pilha+*tamanho);

}

int topo(int *pilha,int tamanho){
    if(tamanho>=1)
    return *(pilha+tamanho-1);

    return  -1;
}

int getTamanho(int tamanho)
{
    return tamanho;
}

void exibirPilha(int **pilha, int tamanho)
{
    printf("--\n");
    for(int i=tamanho-1;i>=0;i--)
        printf("%d\n",*(*pilha+i));
    printf("--\n");


}

bool vazia(int tamanho){
    if(tamanho==0)
        return true;

    return  false;

}


#endif // ARRAYSTACK_H
