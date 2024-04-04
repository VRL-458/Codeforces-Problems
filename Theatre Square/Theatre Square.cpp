#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    // tener cuidado  con el desbordaiento de menoria, si no es long long se desborda hasta con solo long :)
    long long n,m,a;
    long long resa, resb;
    cin >> n>>m>>a;
    if (n % a  == 0){
        resa = n/a;
    }
    else{
        resa = n/a +1;
    }
    if(m%a ==0){
        resb = m/a;
    }
    else {
        resb = m/a +1;
    }
    cout << resa * resb;
    return 0;
}