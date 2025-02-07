#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    string number = "";
    cin >> number;
      int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool condition= true;
    bool condition2 = false;
    for (int i=0; i<number.length(); i++){
        if (number[i] != '7' && number[i] != '4'){
            condition = false;
            break;
        }
    }
    for (int lucky : luckyNumbers){
        if (stoi(number)%lucky ==0){
            condition2 = true;
            break;
        }

    }
    if (condition2 || condition ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}