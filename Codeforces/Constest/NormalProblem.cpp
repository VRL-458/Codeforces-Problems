#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int t;
    string n;
    cin >> t;
    string result ="";
    for (int i=0; i<t; i++)
    {
    
        cin >>n;
        for (int i= n.length() -1; i>=0; i--){
            if(n[i]== 'q'){
                result += 'p';
            }
            else if (n[i] =='p')
            {
                result += 'q';
            }
            else{
                result += 'w';
            }  
        }
        cout<<result<<endl;
        result = "";

    }
    return 0;
}