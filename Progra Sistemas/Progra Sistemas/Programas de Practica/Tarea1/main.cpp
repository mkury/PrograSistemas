#include <iostream>

using namespace std;

int main()
{
    int c =0;
    int numero = 0;
    int mayor = 0;
    int primero = 0;
    int segundo = 0;
    int tercero = 0;
    while (c<10){
        cout<<"Ingrese un numero...  ";
        cin>> numero;
        if ((numero>=1) && (numero<=50)){
            primero++;
            if (numero>mayor){
                mayor = numero;
            }
        }
        else if ((numero>=51) && (numero<=80)){
            segundo++;
            if (numero>mayor){
                mayor = numero;
            }
        }
        else {
            tercero++;
            if (numero>mayor){
                mayor = numero;
            }
        }
       c++;
    }
    cout<<"Hubieron "<<primero<< " numeros entre 1 y 50.";

    return 0;
}
