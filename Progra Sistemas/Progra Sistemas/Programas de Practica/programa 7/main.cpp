#include <iostream>

using namespace std;
int numero;

int main()
{
    cout<<"Ingrese un numero....";
    cin >>numero;
    if ((numero >= 1) && (numero <= 50)){
        cout<<"Numero esta entre 1 y 50";
    }
    else if ((numero >= 51) && (numero <= 100)){
        cout<<"Numero esta entre 51 y 100";
    }
    else if (numero>100){
        cout<<"Numero mayor a 100";
    }
    else {
        cout<<"El numero es negativo";
    }
    cout<<"\n\n";

    return 0;
}
