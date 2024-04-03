#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{       
        long number ;
        int count= 0;
        cin >> number;
        while(number > 0){
            if (number % 10 ==4 || number % 10 ==7){
                count += 1;

            }
            number = number /10;
        }

    if (count == 4 || count == 7){
        cout <<"YES";

    }
    else {
        cout << "NO";
    }
    return 0;
}