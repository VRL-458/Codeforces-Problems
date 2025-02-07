#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int t;
    int w;
    int a;
    int b;
    int c;
    int result;
    int sobra;
    cin >> t;
    for (int i=0; i<t; i++){
    cin>> w>>a>>b>>c;
    if(w-a > 0){
        result += a;
        sobra += w-a;
    }

    else if (w-a<0){
        result += w;
    }
    else {
        result += a;
    }
    //ppara b
    if(w-b > 0){
        result += b;
        sobra += w-b;
    }
    else if (w-b<0){
        result += w;
    }
    else 
    {
        result +=b;
    }
    if (sobra >0){
        if (sobra -c >= 0){
            result += c;
        }
        else if (sobra - c < 0) {
            result += sobra;
        }
    }
    cout <<result<<endl;
    result =0;
    sobra = 0;
    }
    
    return 0;
}