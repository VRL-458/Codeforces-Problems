#include <vector>
#include <string>
#include <iostream>
 
using namespace std;
 
int main()
{       
    string word;
    string translation;
    cin >> word>>translation;
    string text;
    for(int i=word.size()-1;i>=0;i--){
        text+=word[i];
    }
    if(text==translation){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 
    return 0;
}