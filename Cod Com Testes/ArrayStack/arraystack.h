#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "malloc.h"

int *pilha;
int tamanho=0;
int capacidade;


void inicializar(int Ncapacidade)
{
    pilha = (int*)calloc(capacidade,sizeof (int));
    capacidade = Ncapacidade;

}

void duplicar(){
    pilha=(int*)realloc(pilha,2*sizeof (pilha)*sizeof(int));
    capacidade = capacidade * 2;
}

void empilhar(int N){
    if(tamanho==sizeof (pilha))
        duplicar();

    pilha[tamanho]=N;
    tamanho ++;
}

void desempilhar(){
    tamanho--;
}

int desempilharRetornando(){
    desempilhar();
    return pilha[tamanho];

}

int topo(){
    if(tamanho>=1)
    return pilha[tamanho-1];

    return  -1;
}

int getTamanho()
{
    return  tamanho;
}

void exibirPilha()
{
    printf("--\n");
    for(int i=tamanho-1;i>=0;i--)
        printf("%d\n",pilha[i]);
    printf("--\n");


}

bool vazia(){
    if(tamanho==0)
        return true;
    else
        return  false;

}


#endif // ARRAYSTACK_H