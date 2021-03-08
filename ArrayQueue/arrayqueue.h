#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <math.h>

#define n 5

using namespace std;

struct AQueue{
    int frente=-1;
    int tras=-1;
    int elementos[n];
};

bool vazia(struct AQueue * Queue){
    if(Queue==nullptr)
        return true;
    else if((Queue->frente==-1) && (Queue->tras==-1))
        return true;
    else
        return false;
}

void enfilerar(struct AQueue *Queue,int valor){

   //int n=sizeof(Queue)/sizeof (int);
    if(vazia(Queue))
    {
        Queue->tras=0;
        Queue->frente=0;
        Queue->elementos[Queue->tras]=valor;
    }
    else if((Queue->tras+1)%n != Queue->frente) //Fila está cheia quando: (tras+1)%n == frente
    {
        //int n=sizeof(Queue)/sizeof (int);
        Queue->tras=(Queue->tras+1)%n;
        Queue->elementos[Queue->tras]=valor;
    }



}

int desenfilerar(struct AQueue * Queue){

    if(!vazia(Queue))
    {
        //int n=sizeof(Queue)/sizeof (int);
        int pos=Queue->frente;
        if((Queue->tras) == (Queue->frente))
        {

         Queue->tras = -1;
         Queue->frente = -1;
        }
        else{
         Queue->frente=(Queue->frente+1)%n;
        }

        return Queue->elementos[pos];
    }

        return  -1;
}

int tamanho(struct AQueue * Queue)
{
    //int n=sizeof(Queue)/sizeof (int);
    if(Queue->frente > Queue->tras)
        return Queue->frente -n + Queue->tras + 1;
    else
        return Queue->tras-Queue->frente + 1;
}

int frente(struct AQueue * Queue){

    if(!vazia(Queue))
    return Queue->elementos[Queue->frente];


        return  -1;
}

#endif // ARRAYQUEUE_H
