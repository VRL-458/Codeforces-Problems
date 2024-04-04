#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int cantidad;
    cin >> cantidad;
    while (cantidad > 0){
        string word;
        cin >> word;
        if (word.length() <=10){
            cout << word<<endl;
        }
        else{
            cout<<word[0]<<word.length()-2<<word[word.length() -1]<<endl;
        }
        cantidad --;
    }
    return 0;
}