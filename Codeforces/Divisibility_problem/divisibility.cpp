#include <bits/stdc++.h>
using namespace std;

int main()
{       
    int cantidad;
    int a;
    int b;
    int resultado;
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++) {
        cin >> a >> b;
        if (a % b == 0 ){
            cout << 0 << endl;
        }
        else{
        resultado = a % b;
        cout << b-resultado << endl;
        }
    }
}