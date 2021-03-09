#include <iostream>
#include <ArrayStack.h>

using namespace std;

int main()
{
 int * pilha;
 int capacidade =3;
 int tamanho=0;
    inicializar(&pilha,capacidade);
    empilhar(&pilha,1,&tamanho,&capacidade);
    empilhar(&pilha,2,&tamanho,&capacidade);
    empilhar(&pilha,3,&tamanho,&capacidade);
    empilhar(&pilha,4,&tamanho,&capacidade);
    empilhar(&pilha,5,&tamanho,&capacidade);
    cout<<desempilharRetornando(&pilha,&tamanho);
    empilhar(&pilha,6,&tamanho,&capacidade);
    exibirPilha(&pilha,tamanho);
}
