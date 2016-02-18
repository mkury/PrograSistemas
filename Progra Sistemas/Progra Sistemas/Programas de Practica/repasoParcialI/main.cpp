#include <iostream>

using namespace std;

int turno;
char empleado[30];
double ventas;
double comision;
double porcenComis;

void Datos( int &turno, char empleado[], double &ventas){
    cout<<"Ingrese nombre del Empleado: ";
    cin.getline(empleado, 30);
    cout<<"Ingrese cantidad de ventas: ";
    cin>> ventas;

    do {
        cout<<"Ingrese el numero de turno: ";
        cin>>turno;
    } while (!(turno>=1 && turno<=3));
}

double porComis(int turno){
    if (turno == 1){
        return 0.05;
    }
    else if (turno == 2){
        return 0.06;
    }
    else {
        return 0.04;
    }
}
void calcular (int turno, double ventas, double &comision, double &porcenComis){
    porcenComis = porComis(turno);
    comision = porcenComis * ventas;
}

int main() {

Datos(turno, empleado, ventas);
calcular(turno, ventas, comision, porcenComis);
cout<<" Porcentaje de comision...."<<porcenComis<<"\n";
cout<<"Comision Ganada..."<<comision<<"\n";




    return 0;
}
