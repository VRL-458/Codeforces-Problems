#include <bits/stdc++.h>
using namespace std;

int main()
{       
    int number;
    map<int, int> frecuencyofcolor;
    int buy;
    for (int i = 0; i < 4; i++)
    {
        cin >> number;
        frecuencyofcolor[number] ++;
    }
    for (auto const &par :frecuencyofcolor)
    {
        buy += par.second - 1;
    }
    cout << buy << endl;
    return 0;
}