#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int cantidad;
    string colores;
    int cambios=0;
    cin>>cantidad>>colores;
    for (int i=0; i<cantidad; i++)
    {
        if (colores[i]==colores[i+1])
        {
            cambios++;
        }
    }
    cout<<cambios<<endl;
    return 0;
}