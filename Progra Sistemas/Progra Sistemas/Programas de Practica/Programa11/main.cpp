#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(0));
    int i;
    int mayor=0;
    int num=0;
    int suma=0;
    int promedio=0;
    for (i=1;i<10;i++) {
        num = 30 + rand() % (80-30);
        cout<<"Numero "<<i<<" es: "<<num<< "\n";
        if (num>mayor){
                mayor = num;
            }
        suma+= num;
    }
    promedio = suma / 10;
    cout<<"Promedio de numeros: "<<promedio;
}
