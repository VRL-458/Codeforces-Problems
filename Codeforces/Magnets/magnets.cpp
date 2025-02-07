#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int magnet1;
    int magnet2;
    int groups =0;
    cin>>n;
    cin>>magnet1;
    
    for(int i=0; i<n-1; i++){
        cin >> magnet2;
        if (magnet1 != magnet2) {
            groups++;
            magnet1 = magnet2;
        }
    
       
    }
    cout<<groups+1;
    return 0;
}