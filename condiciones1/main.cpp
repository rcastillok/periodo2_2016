#include <iostream>

using namespace std;
/*Ingresar un numero
el programa debera de escribir cuantas cifras
tiene el numero.
si tiene mas o igual a cuatro cifras escribir
tiene mas de cuatro cicfras
*/
int numero;
int main()
{
    cout << "Ingresar numero ..:";
    cin>>numero;

    if (numero<0)
        numero*= (-1); // numero= numero * (-1)

    if (numero<=9)
        cout<<"**Tiene una Cifra**";
       else if (numero<=99)
             cout<<"**Tiene dos Cifra**";
            else if (numero<=999)
             cout<<"**Tiene tres Cifra**";
            else
             cout<<"**Tiene cuatro o mas de cuatro Cifra**";



    return 0;
}
