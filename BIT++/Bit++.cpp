#include <vector>
#include <string>
#include <iostream>
//con esta plantilla tenemos un valor por entrada n para recibir n entradas
using namespace std;

int main()
{           
    int cantidad;
    int result;
    cin >> cantidad;
    while(cantidad > 0){
        string valor;
        cin >> valor;
        if (valor == "X++" || valor == "++X"){
            result ++;
        }
        else {
            result --;
        }
        cantidad --;
    }
    cout << result;
    return 0;
}