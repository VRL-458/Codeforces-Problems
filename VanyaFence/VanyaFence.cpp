#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int n, h;
    int hights;
    cin>>n>>h;
    int total =0;
    for (int i = 0; i <n; i++)
    {
         cin>> hights;
        if ((hights) > h)
        {
            total += 2;
        }
        else
        {
            total += 1;
        }
    }
    cout<<total<<endl;

        
    return 0;
} 