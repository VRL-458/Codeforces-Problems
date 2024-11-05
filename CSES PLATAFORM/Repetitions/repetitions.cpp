#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    string cadena;
    cin>> cadena;
    int repetidos=0;
    int rep=1;
    char new_letter= cadena[0];
    char letter = cadena[0];

    for (int i=1; cadena.length()>i; i++){
        if (new_letter!= cadena[i] ){
            if (repetidos < rep){
                repetidos = rep;
                letter = new_letter;
                rep=1;
                new_letter = cadena[i];
            }
            else{
                rep = 1;
                new_letter = cadena[i];
            }
            }
        else {
                rep += 1;
            }
        }
    cout << repetidos;
  
    return 0;
}