#include <vector>
#include <string>
#include <iostream>
#include <cmath>
//con esta plantilla tenemos un valor por entrada n para recibir n entradas
using namespace std;

int main()
{           
    int cantidad;
    int x0;
    int y0;
    int x1;
    int y1;
    int result;
    cin >> cantidad;
    while(cantidad > 0){
        for (int i = 0; i < 2; i++){    
            cin >>x0>>y0;
            cin >>x1>>y1;
            if (i<1){
                if(x0 == x1){
                    result = pow(abs(y0-y1), 2);
                }
                else{
                    result = pow(abs(x0-x1), 2);
                }
            }
        
        }
        cout<<result<<endl;
        cantidad --;
    }
    return 0;
}