#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n; 
    double drinks;
    double total;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>drinks;
        total+=drinks/n;
    }
    cout << total << endl;
    return 0;
}