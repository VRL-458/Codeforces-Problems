#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    string word;
    string result;
    cin >> word;

    for (int i=0; i<word.length(); i++){
        if( tolower(word[i]) != 'a'&& tolower(word[i]) != 'e' && tolower(word[i]) != 'i' && tolower(word[i]) != 'o' && tolower(word[i]) != 'u' && tolower(word[i]) != 'y')
        {
           result += '.';
           result += tolower(word[i]);
        }
    }

    cout << result << endl;
    return 0;
}