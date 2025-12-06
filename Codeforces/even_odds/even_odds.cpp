#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
     long long n=0;
     long long k=0;
     cin >> n >> k;
     if(n %2 ==0){
          if(n/2>= k){
               cout<<(k*2-1);
          }
          else{
               cout<<((k - (n/2))*2);
          }
     }   
     else{
          if(n/2+1>=k){
               cout<<(k*2-1);
          }
          else{
               cout<<((k - (n/2+1))*2);
          }
     }
    return 0;
}