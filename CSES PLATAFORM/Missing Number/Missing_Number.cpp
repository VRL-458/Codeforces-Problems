#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int cant;
    int res1=0;
    int res2=0;
    int num;
    cin>>cant;
    for (int i=1; i<cant;i++){
        cin >> num;
        res1 += i;
        res2 += num;
    }
    res1 += cant;
    cout<<res1-res2;
    return 0;
}