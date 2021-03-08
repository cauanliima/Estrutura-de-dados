#include <iostream>
#include "arrayqueue.h"

using namespace std;

int main()
{
    struct AQueue  Queue;

    enfilerar(&Queue,9);

    enfilerar(&Queue,10);

    cout<<frente(&Queue)<<endl;

    enfilerar(&Queue,8);

    enfilerar(&Queue,7);

    enfilerar(&Queue,4);



    //for(int i=0;i<5;i++)
   //     cout<<" "<<Queue.elementos[i]<<" ";

   // cout<<endl;

     cout<<desenfilerar(&Queue)<<endl;
      cout<<desenfilerar(&Queue)<<endl;
      cout<<desenfilerar(&Queue)<<endl;
      cout<<desenfilerar(&Queue)<<endl;
      cout<<desenfilerar(&Queue)<<endl;


    return 0;
}
