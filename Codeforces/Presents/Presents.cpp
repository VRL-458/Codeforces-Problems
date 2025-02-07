#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int n;
    int number;
    cin >> n;
    vector<int> friends(n, -1);
  
    for (int i=1; i<=n;i++){
        cin>>number;
        friends[number-1] = i;
    }
    for (int i=0; i<n;i++){
        
        cout<<friends[i]<<" ";
    }
    return 0;
}