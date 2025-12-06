#include <vector>
#include <string>
#include <iostream>
#include <algorithm> //necesary for sort

using namespace std;

int main()
{       

    vector<int> vect =   {5,4,7,8,2,1,5};
    sort(vect.begin(), vect.end()); // this is to sort the vector in ascending order
    sort(vect.begin(), vect.end(), greater<int>()); // this is to sort the vector in descending order greater<int>() let us do this
    return 0;
}