#include <iostream>
#include "LinkedListQueue.h"
#include "stdlib.h"
#include "stdio.h"


using namespace std;

int main()
{
    struct LQueue * test = nullptr;

    enfilerar(&test,5);

   cout<<test->frente->valor;

    //enfilerar(&test,6);

    //cout<<desenfilerar(test);
    //cout<<desenfilerar(test);

return 0;
}
