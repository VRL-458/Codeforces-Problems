#include <vector>
#include <string>
#include <iostream>


using namespace std;
int cant;
string word;
string rest;
int main()
{  
    cin >> cant;
    for (int i=0; i<cant; i++)
    {
        cin >> word;
        cout<< word<<endl;
        rest+= word[0];
    }
    cout<< rest << endl;
    return 0;
}
