#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int distancia;
    int resultado=0;
    int paso=5;
    cin >> distancia;

    while (paso >0){
        resultado += distancia/paso;
        distancia = distancia%paso;
        paso --;
    }
    cout<<resultado<<endl;    
    return 0;
}