#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *pilha;
int tamanho=0;


void inicializar(int capacidade)
{
    pilha = (int*)calloc(capacidade,sizeof (int));

}

void duplicar(){
    pilha=(int*)realloc(pilha,2*sizeof (pilha)*sizeof(int));
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



int main()
{
inicializar(5);
empilhar(2);
empilhar(3);
empilhar(4);
empilhar(5);
empilhar(6);
empilhar(7);
desempilhar();
printf("%d\n",desempilharRetornando());
exibirPilha();
}
