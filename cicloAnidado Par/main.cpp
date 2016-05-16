#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int num,cp=0,mayor=0;
char resp;

int main()
{
    do
    {   cout<<"Ingresar Numero ";
        cin>>num;
         //_flushall;

        if (num % 2==0)
        {
            cp++;
            if (num>mayor)
                 mayor=num;

        }
        do
        {
            cout<<"desea Continuar ";
            cin>>resp;
            resp=toupper(resp);
        }while ((resp!='S') and (resp!='N'));

  }while (resp!='N');
  cout<<"Mayor de los Pares....>"<<mayor<<"\n";



}
