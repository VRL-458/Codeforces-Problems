#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main()
{   
    int n;
    int response;
    string result = "EASY";
    cin >> n;
    for (int i=0; i<n;i++){
        cin>> response;
        if(response == 1)
        {
            result = "HARD";
            break;
        }
    }
    cout<< result;
    return 0;
}