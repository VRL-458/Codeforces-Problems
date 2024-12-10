#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int x;
    int y;
    int posicionx;
    int posiciony;
    string aux;
    bool salida = false;
    cin >> x;
    cin >>y;
    vector<string> mapa;
    while (x != 0 && y!=0){
        for (int i = 0; i < x; i++){
            cin >> aux;
            if (aux[0] == '+' || aux[aux.size()-1] == '+'){
                salida = true;
            }
            mapa.push_back(aux);
          
            for (int j= 0; j< y; j++){
                if (i ==0 ||i ==x-1){
                    if (aux[j] == '+'){
                        salida = true;
                    }
                }

                if (aux[j] == 'X'){
                    posicionx = i;
                    posiciony = j;
                }
            }
        }
        if (salida == true){
            
        }else 
        {
            cout <<-1<<endl;
        }
        
    }

        
    return 0;
}