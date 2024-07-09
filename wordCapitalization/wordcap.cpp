//create a main function with teh necesary basic libraries

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string word;
    cin>>word;
    word[0] = toupper(word[0]);
    cout<<word<<endl;
}
