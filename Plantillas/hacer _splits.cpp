#include <iostream>
#include <string>
#include <sstream> //this is necesary for splits
#include <vector>

using namespace std;

int main() {
    string frase = "Hola como estas";
    istringstream iss(frase);
    vector<string> palabras;

    /*
    Leer cada palabra separada por espacio en blanco
    string palabra;
    while (iss >> palabra) {
        palabras.push_back(palabra);
    }
    this second while allow us to do split with char
    while (getline(iss, palabra, '+')) {
        palabras.push_back(palabra);
    }
    */
    // Mostrar las palabras
    for (const auto& palabra : palabras) {
        cout << palabra << endl;
    }

    return 0;
}