#include <iostream>
#include <bitset>

using namespace std;

int main() {
    string num1;
    string num2;
    
    string result;

    cin>>num1>>num2;

    for(int i=0;i<num1.length(); i++){
        if (num2[i] == num1[i]){
            result ='0' +result;   
        }
        else {
            result = '1' + result;
        }

    }
    cout<<result<<endl;
    return 0;
}
