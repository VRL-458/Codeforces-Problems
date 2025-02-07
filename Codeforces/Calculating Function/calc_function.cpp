#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
   long long n;
   long long total;
   cin >> n;
   if(n%2==0){
       total = n/2;
   }
    else{
        total = (n/2)-n;
    }
    cout<<total;
    return 0;
}