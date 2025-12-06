#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{       
    int cantidad;
    string word;
    cin>>cantidad;
    for (int i=0;i<cantidad; i++){
        cin>>word;
    
        for(int j=0;j<=word.size() -2;j++){
            if (word.size() == 1){
                break;
            }
            if(word.length()==2){
                if (word[0] == word[1]){
                    word.erase(1,1);
                }
                break;
            }

            if(word[j] == word[j+1]){
                if (j ==0){
                    word[j]= word[word.length()-1];
                }
                else{
                    if (j == word.length()-1){
                        word[j]= word[0];
                    }
                    else{
                        word[j]= word[j-1];
                    }
                }
                word.erase(j+1,1);
                j=0;
            }
        }
        cout<<"word: "<<word<<endl;
        cout<<word.length()<<endl;
    }
    return 0;
}