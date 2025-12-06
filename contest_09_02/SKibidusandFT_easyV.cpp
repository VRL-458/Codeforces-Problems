#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int cantidad;
    int n;
    int m;
    int b;
    cin>>cantidad;
    bool verif=false;
    for(int i=0;i<cantidad; i++){
        cin>>n>>m;
        vector<int> a(n);
        for (int j=0; j<n; j++){
            cin>>a[j];
        }
        cin>>b;
        int number=INT_MIN;
        for(int j=0; j<n; j++){
            if (a[j]<=a[j+1]){
                verif = true;
                number = a[j];
            }
            else{
                if ( b - a[j+1]>= a[j] ){
                    verif = true;
                }
                else if(b -a[j] >= number){
                    number = b-a[j];
                    verif = true;
                }
                else{
                    verif = false;
                    break;
                }
            }
        }
        if(verif){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}