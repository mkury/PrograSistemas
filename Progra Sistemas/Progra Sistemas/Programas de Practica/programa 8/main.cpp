#include <iostream>

using namespace std;
int na, ne, nf;
int main()
{
    cout<<"Ingresar nota del examen \n";
    cin>> ne;
    cout<<"Ingresar nota acumulada \n";
    cin>> na;
    nf=ne+na;
    if ((nf>=57)&&(nf<=59)){
        nf=60;
    }
    if (nf>=60){
        cout<<nf<<"\n"<<"Aprobado";
    }
    else {
        cout<<nf<<"\n"<<"Reprobado";
    }
}
