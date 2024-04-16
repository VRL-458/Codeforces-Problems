#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    string a;
    string b;
    cin >> a;
    cin >> b;

    for (char &c : a) {
        c = tolower(c);
    }
    for (char &c : b){
        c = tolower(c);
    }
    if (a < b){
        cout <<"-1";
    }
    else if (a == b){
        cout <<"0";
    }
    else {
        cout << "1";
    }
    return 0;
}