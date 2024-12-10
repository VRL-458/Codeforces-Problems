#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{       
    int n, k, aprroveds, igual, aux;
    aprroveds =0;
    string possitions;
    igual = 1;
    cin >>n>>k;
    aux = k;
    cin.ignore();
    getline(cin, possitions);
    istringstream iss(possitions);
    string valor;
    while (iss >> valor ){
        if (stoi(valor) == 0){
            break;
        }
        aux --;
        if (aux == 0){
            igual = stoi(valor);
        }
        if  (stoi(valor) >= igual ){
            aprroveds ++;
            
        }
        
       else{
            break;
        }
    }
    cout <<aprroveds;
    return 0;
}