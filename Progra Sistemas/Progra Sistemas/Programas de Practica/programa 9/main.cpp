#include <iostream>

using namespace std;

int main()
{
    int c=0;
    int mayor = 0;
    int numero = 0;
    int suma = 0;
    int promedio = 0;
    while (c<5) {
        c++;
        cout<<"Numero # "<< c <<"...:  ";
        cin>> numero;
        suma+= numero;
        promedio= suma/5;
        if (numero > mayor){
            mayor = numero;
        }
    };
    cout<<"El numero mayor es "<<mayor<<"\n";
    cout<<"La suma de los numeros es "<<suma<<"\n";
    cout<<"El promedio de los numeros es "<<promedio<<"\n";
    cout<<"Final del ciclo\n";
    return 0;
}
