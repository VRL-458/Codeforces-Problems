#include <vector>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{       
    int t;
    cin >> t;
    int k;
    int l1;
    int r1;
    int l2;
    int r2;
    int result;
    double n;
    for (int i=0; i<t; i++){
        for (int j=l1; j<=r1; j++){
            for (int w= l1; l2<=r2; w++){
                n = log2(w/j);
                if(fmod(n, 1)== 0.0 && n>0){
                    result+=1;
                }
            }
        }
        cout<<result<<endl;
        result =0;
    }
    return 0;
}