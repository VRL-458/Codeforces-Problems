#include <vector>
#include <string>
#include <iostream>
#include <sstream> 
#include <vector>
#include <algorithm>
using namespace std;

int main()
{      
    string ejercicio; 
    string resultado;
    cin >> ejercicio;

    istringstream iss(ejercicio);
    vector<string> palabras;
    string palabra;
    while (getline(iss, palabra, '+')) {
        palabras.push_back(palabra);
    }
    sort(palabras.begin(), palabras.end());

    if(!palabras.empty()){
        resultado += palabras[0];
        for (int i =1; i<palabras.size(); i++)
            {
                resultado +=  "+" + palabras[i];
            } 
   }
   cout <<resultado;
    return 0;
}