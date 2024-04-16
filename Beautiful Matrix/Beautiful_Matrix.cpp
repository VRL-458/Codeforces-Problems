#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{       
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int columna = 0;
    int fila = 0;
    int resultado = 0;
    for (int i=0; i <5; i++){
        cin>>a>>b>>c>>d>>e;
        if (a+b+c+d+e == 1){
            if(a==1){
                columna =0;
                fila = i;
                break;
            }
            else if(b ==1){
                columna = 1;
                fila = i;
                break;
            }
            else if(c == 1){
                columna = 2;
                fila = i;
                break;
            }
            else if (d == 1){
                columna = 3;
                fila = i;
                break;
            }
            else {
                columna = 4;
                fila = i;
                break;
            }
        }
    }
    resultado = abs(columna -2) + abs(fila -2);
    cout << resultado;
    return 0;
}