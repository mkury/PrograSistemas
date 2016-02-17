#include <iostream>

using namespace std;

int main()
{
    int numero, i=1;
    for (i=0;i<=5;i++){
         do{
            cout<<"Ingresar numero entre 50 y 100:  ";
            cin>>numero;
        } while (!((numero>=50) && (numero<=100)));
        cout<<i<<"  Numero correcto \n";
    }

    return 0;
}
