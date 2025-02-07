#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{       
    int n;
    int coin;
    int total=0;
    int valor=0;
    int tcoind=0;
    vector<int> coins;
    cin>> n;
    for (int i=0; i<n; i++){
        cin>>coin;
        total+=coin;
        coins.push_back(coin);
    }
    sort(coins.begin(), coins.end(), greater<int>());
    while (total/2 >= valor && tcoind<n)
    {
        valor+=coins[tcoind];
        tcoind++;
    }
    cout<<tcoind<<endl;

    return 0;
}