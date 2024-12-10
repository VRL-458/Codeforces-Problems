#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;

//tenia un error en la logica de este problema, revisar bien antes de intentar resolverlos.
int main()
{       
    string user;
    string unique;
    map <char, int> repetidos;
    int result=0;
    cin>>user;
    for(int i = 0; i < user.size(); i++)
    {
            repetidos.insert(pair<char, int>(user[i], 0));
    }
    for (const auto &pair : repetidos)
    {
            result++;
    }
    if(result%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}