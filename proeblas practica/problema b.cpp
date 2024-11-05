#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int mes;
    int fibonachi =1;
    int recursos;
    int aux;
    int anterior=0;
    cin >> mes;
    cin >> recursos;
    while(mes != 0 && recursos != 0){
            while(mes > 1){
            recursos = recursos + (2 * fibonachi);
            aux = fibonachi;
            fibonachi = anterior + fibonachi;
            anterior = aux;
            mes --;
        }
        cout<<recursos<<endl;
        anterior = 0;
        fibonachi = 1;
        cin>> mes;
        cin >> recursos;
    }
    return 0;
}