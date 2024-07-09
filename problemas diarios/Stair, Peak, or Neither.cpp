#include <vector>
#include <string>
#include <iostream>
//con esta plantilla tenemos un valor por entrada n para recibir n entradas
using namespace std;

int main()
{           
    int cantidad;
    int a;
    int b;
    int c;
    cin >> cantidad;
    while(cantidad > 0){
        cin>>a>>b>>c;
        if (a<b&&b<c){
            cout<<"STAIR"<<endl;
        }
        else if(a<b&&b>c){
            cout<<"PEAK"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }

        cantidad --;

    }
    return 0;
}