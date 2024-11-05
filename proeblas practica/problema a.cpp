#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int cantidad;
    int numa;
    int numb;
    cin >> cantidad;
    while(cantidad >0)
    {
        cin >>numa>>numb;
        cout <<"la suma de a y b es: "<< numa + numb << endl;
        cantidad --;
    }
    return 0;
}