#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#define INIT_VAL_DEF 10

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct AStack{
    int *pilha=nullptr;
    int tamanho=0;
    int capacidade;

};



void inicializar(struct AStack * _AStack,int capacidade)
{
    _AStack->capacidade=capacidade;
    _AStack->pilha = (int*)calloc(_AStack->capacidade,sizeof (int));


}

void duplicar(struct AStack * _AStack){
    _AStack->capacidade=2*_AStack->capacidade;
    _AStack->pilha=(int*)realloc(_AStack->pilha,_AStack->capacidade*sizeof(int));
}

void empilhar(struct AStack * _AStack,int N){
    if(_AStack->pilha==nullptr)
        inicializar(_AStack,INIT_VAL_DEF);

    if(_AStack->tamanho==_AStack->capacidade)
        duplicar(_AStack);

    _AStack->pilha[_AStack->tamanho]=N;
    _AStack->tamanho++;
}

void desempilhar(struct AStack * _AStack){
    _AStack->tamanho--;
}

int desempilharRetornando(struct AStack * _AStack){
    desempilhar(_AStack);
    return _AStack->pilha[_AStack->tamanho];

}

int topo(struct AStack * _AStack){
    if(_AStack->tamanho>=1)
    return _AStack->pilha[_AStack->tamanho-1];

    return  -1;
}

int getTamanho(struct AStack * _AStack)
{
    return _AStack->tamanho;
}

void exibirPilha(struct AStack * _AStack)
{
    printf("--\n");
    for(int i=_AStack->tamanho-1;i>=0;i--)
        printf("%d\n",_AStack->pilha[i]);
    printf("--\n");


}

bool vazia(struct AStack * _AStack){
    if(_AStack->tamanho==0)
        return true;
    else
        return  false;

}


#endif // ARRAYSTACK_H
