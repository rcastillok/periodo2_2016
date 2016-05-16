#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
//presentar los numeros del 1-10
int contador,suma,mayor;
int numero,menor,con50,suma50,prome50;

int main()
{ srand(time(0));
   contador=0;
   suma=0;con50=0;
   mayor=0;
   menor= 100;
   while (contador<10)
   {   numero =1 + rand() % (100-1);
       suma = suma + numero;
       if (mayor < numero)
         mayor = numero;

       if (menor > numero)
            menor = numero;

       if (numero>50)
        { con50++;
          suma50+= numero;
        }

       contador++;
       cout<<contador<<" Numero "<<numero<<"\n";
   }
   prome50= suma50/con50;
    cout<<"Promedio  mayores a 50 "<< prome50<<"\n";
    cout<<"Numeros mayores a 50 "<< con50<<"\n";
   cout<<"Numero Mayor "<< mayor<<"\n";
   cout<<"Numero Menor "<< menor<<"\n";
   cout<<"Suma de los numeros es "<<suma<<"\n";
   cout<<"Final del programa"<<"\n";
}
