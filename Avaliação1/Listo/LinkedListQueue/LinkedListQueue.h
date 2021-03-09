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
    noh * frente;
    noh * tras;
    int tam=0;

};

bool vazia(struct LQueue * Queue){

    if(Queue==nullptr)
        return true;

    if((Queue->tras==nullptr&&Queue->frente==nullptr)||Queue->tam==0)
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
        cout<<"teste";
       (*Queue)->frente=novoNoh;
       (*Queue)->tras=novoNoh;
   }
   else{
       (*Queue)->tras->prox=novoNoh;
       (*Queue)->tras=novoNoh;
   }

   (*Queue)->tam++;

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

    Queue->tam--;
    return valor;

}






#endif // LINKEDLISTQUEUE_H
