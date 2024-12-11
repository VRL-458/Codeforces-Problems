#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main()
{   
    string word;
    string check = "hello";
    int position =0;
    string result = "NO";
    cin>> word;
    for (int i =0; i<word.length(); i++)
    {
        if(word[i]== check[position]){
                position +=1;
            }
        if (position == 5){
            cout<<"entra if <5"<<endl;
            result= "YES";
            break;
        }
    }
    cout<< result;
    return 0;
}