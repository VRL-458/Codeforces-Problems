#include <bits/stdc++.h>
using namespace std;

int main()
{
    string number1;
    string number2;
    cin >> number1 >> number2;
    string accumulated = "";
    for (int i = 0; i < number1.size(); i++)
    {
        if (number1[i] == number2[i])
        {
            accumulated += '0';
        }
        else
        {
            accumulated += '1';
        }
    }
    cout << accumulated << endl;

}
