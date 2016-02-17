#include <iostream>

using namespace std;

int main()
{
    int i =0;
    int j = 0;
    for (i=6;i>1;i--){
        for(j=1; j<i; j++){
            cout<<"*";

        }
        cout<<"\n";
    }

    return 0;
}
