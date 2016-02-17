#include <iostream>
#include <stdio.h>

using namespace std;

//    _flushhall() ---- borrar el enter / el ultimo valor
// toupper -- a Mayuscula
int main()
{
    char resp;
    int i, num;

    do{
        cout<<"Numero Entero...>";
        cin>>num;
        _flushall();
        do {
            cout<<"Desea continuar?..." ;
            cin.get(resp);
            _flushall();
        } while ((toupper(resp)!='S') && (toupper(resp)!='N'));
    } while (toupper(resp)=='S');
    return 0;
}
