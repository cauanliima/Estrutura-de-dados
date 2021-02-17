#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>

struct noh{

    int valor;
    struct noh* prox;
};

void imprimirPilha(struct noh ** inicio){

    if((*inicio)!=NULL){
        printf("Imprimindo \n");

        struct noh * aux;
        aux=*inicio;

        printf("--\n");

        while(aux!=NULL){
            printf("%d \n",aux->valor);
            aux=aux->prox;
        }
        printf("--\n");
    }



}

struct noh * alocarNovoNoh(int val){
    struct noh * novoNoh;

    novoNoh = (struct noh *)malloc(sizeof (struct noh));
    novoNoh->valor= val;
    novoNoh->prox=NULL;

    return novoNoh;


}

void empilhar(struct noh ** inicio, int valor, int *tamanho){

    struct noh * novoNoh;
    novoNoh = alocarNovoNoh(valor);


    if((*inicio)==NULL){

        (*inicio)=novoNoh;
        (*tamanho)=1;

    }

    else{

        novoNoh->prox=(*inicio);
        (*inicio)=novoNoh;
        (*tamanho)++;

    }



}

int topo(struct noh** inicio){
    if(inicio!=NULL)
    return  (*inicio)->valor;

    return -1;
}

int desempilhar(struct noh** inicio, int *tamanho){
    if((*inicio)!=NULL){
    struct noh * aux;
    aux=(*inicio);
    *inicio=(*inicio)->prox;

    free(aux);
    (*tamanho)--;
    }
    else{
    return  -1;
    }


}



int main()
{
    int tamanho;
    struct noh *inicio=NULL;

   empilhar(&inicio,2,&tamanho);
   printf("%d\n",inicio);
   empilhar(&inicio,3,&tamanho);
   empilhar(&inicio,4,&tamanho);
   empilhar(&inicio,5,&tamanho);
   empilhar(&inicio,6,&tamanho);
   desempilhar(&inicio,&tamanho);
   //printf("%d\n",tamanho);
   imprimirPilha(&inicio);
   return 0;
}
