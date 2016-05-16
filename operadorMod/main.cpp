#include <iostream>

using namespace std;
int numero;

int main()
{
    cout << "Ingresar un numero...>";
    cin>>numero;
    if (numero % 5==0)
    {
        cout<<"Numero divisible entre 5 ";
    }
    else
    {
        cout<<"Numero NO divisible entre 5 ";
    }
}
