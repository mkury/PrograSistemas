#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    double ne, na, nf;
    printf("Ingresar la nota de examen en base a 100 \n");
    scanf("%lf", &ne);
    ne = ne *0.7;
    printf("Ingresar la nota de acumulado en base a 100 \n");
    scanf("%lf", &na);
    na = na *0.3;
    nf = na + ne;
    printf("Su nota final es de %lf \n", nf);

    if (nf>=60){
        printf("Estado de la nota: Apr \n");
    }
    else {
        printf("Estado de la nota: Rep \n");
    }

    system("PAUSE");


    return 0;
}
