#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <math.h>

using namespace std;

struct noh{
    int valor;
    struct noh* prox;
};
struct LQueue{
    noh * frente=nullptr;
    noh * tras=nullptr;
    int tamanho=0;

};

bool vazia(struct LQueue * Queue){

    if(Queue==nullptr)
        return true;

    if((Queue->tras==nullptr&&Queue->frente==nullptr)||Queue->tamanho==0)
        return  true;

    return false;
}

struct noh * alocarNoh(int valor){
    struct noh* novoNoh;
    novoNoh = (struct noh *)malloc(sizeof (struct noh));
    novoNoh->valor=valor;
    return  novoNoh;
}

void enfilerar(struct LQueue ** Queue, int valor){
    struct noh *novoNoh;
    novoNoh = alocarNoh(valor);

   if((*Queue)==nullptr){
       (*Queue)=(struct LQueue *)malloc(sizeof(struct LQueue));
   }
   if(vazia(*Queue)){
       (*Queue)->frente=novoNoh;
       (*Queue)->tras=novoNoh;
   }
   else{
       (*Queue)->tras->prox=novoNoh;
       (*Queue)->tras=novoNoh;
   }

   (*Queue)->tamanho++;

}

int desenfilerar(struct LQueue * Queue){
    if(vazia(Queue))
        return -1;

    int valor = Queue->frente->valor;

    if(Queue->frente==Queue->tras&&Queue->frente!=nullptr){

        free(Queue->frente);
        Queue->tras=nullptr;
        Queue->frente=nullptr;


    }
    else{
        struct noh* proximo = Queue->frente->prox;
        free(Queue->frente);
        Queue->frente=proximo;
    }

    Queue->tamanho--;
    return valor;

}






#endif // LINKEDLISTQUEUE_H
