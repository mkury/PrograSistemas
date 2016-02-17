#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int rango1=0;
    int rango2=0;
    int rango3=0;
    int contador1=0;
    int contador2=0;
    int contador3=0;
    int promedio1=0;
    int promedio2=0;
    int promedio3=0;
    int num;
    int mayor=0;
    int menor=100000000;

    while (i<5){
        cout<<"Ingrese un numero: ";
        cin>>num;
        if (num<0){
            num = num* -1;
        }

        if ((num>=1)&&(num<=50)){
            contador1++;
            rango1+= num;
        }
        else if ((num>=51)&&(num<=100)){
            contador2++;
            rango2+= num;
        }
        else {
            contador3++;
            rango3+= num;
        }

        if (num>mayor){
            mayor=num;
        }
        if (num<menor){
            menor=num;
        }
        i++;
    }


    promedio1= rango1/contador1;
    promedio2= rango2/contador2;
    promedio3= rango3/contador3;

    cout<<"Numero Mayor:  "<<mayor<<"\n";
    cout<<"Numero Menor:  "<<menor<<"\n";
    cout<<"Promedio 1:  "<<promedio1<<"\n";
    cout<<"Promedio 2:  "<<promedio2<<"\n";
    cout<<"Promedio 3:  "<<promedio3<<"\n";

    return 0;
}
