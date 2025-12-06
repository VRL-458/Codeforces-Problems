#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    string hate = "I hate";
    string love = "I love";
    string phase = "";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (number == i){
             if(i%2!=0){
            phase += hate;
        }
        else{
            phase += love;
        }
        }
        else{
        if(i%2!=0){
            phase += hate + " that ";
        }
        else{
            phase += love + " that ";
        }
    }
    }
    phase += " it";
    cout << phase << endl;

}
