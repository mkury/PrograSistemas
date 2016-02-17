#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n1, n2;
    printf("Ingresar un numero \n");
    scanf("%d", &n1);
    printf("Ingresar un segundo numero \n");
    scanf("%d", &n2);
    if (n1>n2){
        printf("El numero mayor es %d", n1);
    }
    else{
        printf("El numero mayor es %d", n2);
    }

    return 0;
}
