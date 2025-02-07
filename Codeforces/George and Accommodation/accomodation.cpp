#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int rooms;
    cin>>rooms;
    int space;
    int n;
    int count=0;
    for (int i=0; i<rooms;i++){
        cin>>n>>space;
        if (n < space){
            count+=1;
        }
    }       
    cout<<count;
    return 0;
}
