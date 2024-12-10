#include <vector>
#include <string>
#include <iostream>
//con esta plantilla tenemos un valor por entrada n para recibir n entradas
using namespace std;

int main()
{           
    int cantidad;
    int minimum =0;
    int entrada;
    int salida;
    int total=0;
    cin >> cantidad;
    while(cantidad > 0){
        cin>>salida>>entrada;
        total += (entrada-salida);
        if (total > minimum)
        {
            minimum = total;
        }

        cantidad --;

    }
    cout<<minimum<<endl;
    return 0;
}