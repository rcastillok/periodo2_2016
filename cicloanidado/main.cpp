#include <iostream>

using namespace std;
int num,suma=0,c=0,prom;
char resp;
int main()
{  do{

    do{
        cout << "Ingresar Numero div entre 5 mayor a 100 ..>" ;
        cin>>num;
    }while (!(( num % 5 ==0) and  (num>100)));  // el error era que habia puesto != y era solo igual

    suma+= num;

     do
        {
            cout<<"desea Continuar ";
            cin>>resp;
            resp=toupper(resp);
        }while ((resp!='S') and (resp!='N'));
    c++;
  }while (resp!='N');
  prom= suma / c;
  cout<<"Promedio es "<<prom<<"\n";



}
