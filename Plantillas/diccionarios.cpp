#include <vector>
#include <string>
#include <iostream>
#include <map> //agregamos la libreria map

using namespace std;

int main()
{       
    map <char, int> repetidos;
    //para crear un mapa con datos, un mapa llamado nuevos char, int
    



    //para recorrer un mapa
    for (const auto &pair : repetidos)
    {
            //pair.first es la llave
            //pair.second es el valor
    }
    //para anadir key a un mapa
    repetidos.insert(pair<char, int>('a', 0));
    return 0;
}