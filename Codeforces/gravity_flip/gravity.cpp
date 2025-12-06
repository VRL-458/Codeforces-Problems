#include <bits/stdc++.h>
using namespace std;

int main()
{       
   int n;
   int a;
   int rest;
   cin >>n; 
   int values[n];
   for(int i=0; i<n; i++){
         cin>>a;
         values[i] = a;
   }
  for(int k=0; k<n; k++){
      if (values[k] > values[k+1]){
         cout<<"valor k"<<k<<endl;
         rest = values[k] - values[k+1];
         cout<<"resta: "<<rest<<endl;
         values[k+1] = values[k+1] + rest;
         values[k] = values[k] - rest;
         cout<<"valores intercambiados: "<<values[k]<<" "<<values[k+1]<<endl;
         if (n -2 <= k ){
            cout<<"repite"<<endl;
            k = -1;
         }
      }
   }
   for(int j=0; j<n; j++){
      //cout<<"valores de la lista: "<< j<<" ";
      cout<<values[j]<<" ";
   }
}