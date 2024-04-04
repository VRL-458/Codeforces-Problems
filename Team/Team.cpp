#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{           
    int cantidad;
    int a,b,c;
    int suma;
    int resueltos;
    cin >> cantidad;
    while(cantidad > 0){
        cin >>a>>b>>c;
        suma = a+b+c;
        if (suma >= 2){
            resueltos ++;
        }
        cantidad --;
    }
    cout << resueltos;
    return 0;
}