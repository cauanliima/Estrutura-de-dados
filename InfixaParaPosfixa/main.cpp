#include <iostream>
#include <istream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
using namespace std;

string *pilha;
int tamanho=0;

void inicializar(int capacidade)
{

    for(int i=0;i<capacidade;i++)
    pilha= (string*)calloc(capacidade,sizeof(string));

}

//void duplicar(){
//    pilha=(char*)realloc(pilha,2*sizeof (pilha)*sizeof(char));
//}

void empilhar(string txt){
    if(tamanho==sizeof (pilha))
  //      duplicar();

    pilha[tamanho]=txt;
    tamanho ++;
}

void desempilhar(){
    tamanho--;
}

string desempilharRetornando(){
    desempilhar();
    return pilha[tamanho];

}

string topo(){
    if(tamanho>=1)
    return pilha[tamanho-1];
}

int getTamanho()
{
    return  tamanho;
}

void exibirPilha()
{
    printf("--\n");
    for(int i=tamanho-1;i>=0;i--)
        cout<<pilha[i];
    printf("--\n");


}

bool vazia(){
    if(tamanho==0)
        return true;
    else
        return  false;

}



int main(){
    int N;
    string texto;

 //  cout<<"Digite o numero de expressoes: ";
   cin>>N;
    inicializar(N);
            for(int i=0;i<N;i++){
                cin.ignore();
                cin>>texto;
           empilhar(texto);

    }
            for(int i=0;i<N;i++){

        cout<<desempilharRetornando();

    }


return 0;
}
