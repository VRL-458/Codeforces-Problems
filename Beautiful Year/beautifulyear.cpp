#include <vector>
#include <string>
#include <iostream>
#include<vector>
using namespace std;

int main()
{       
    string numero = "0";
    cin>>numero;
    int sum=0;
    bool revisor = true;
    numero = to_string(stoi(numero)+1);
    vector<int> list(10, 0);
    while(revisor){
        fill(list.begin(), list.end(), 0);
        list[numero[0] - '0'] += 1;
        list[numero[1]- '0'] += 1;
        list[numero[2]-'0'] += 1;
        list[numero[3]-'0'] += 1;
        for (int i = 0; i<10; i++)
        {
            if (list[i] ==0 || list[i]==1){
                revisor = false;
            }
            else{
                numero = to_string(stoi(numero)+1);
                revisor = true;
                break; 
            }
        }
    }
    cout<< numero;
    

    
    return 0;
}