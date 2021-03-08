#include <iostream>
#include <ArrayStack.h>

using namespace std;

int main()
{
    struct AStack teste;
    //inicializar(&teste,10);
    empilhar(&teste,2);
    empilhar(&teste,3);
    empilhar(&teste,4);
    empilhar(&teste,5);
    empilhar(&teste,6);
    empilhar(&teste,7);
    desempilhar(&teste);
    printf("%d\n",desempilharRetornando(&teste));
    exibirPilha(&teste);
}
