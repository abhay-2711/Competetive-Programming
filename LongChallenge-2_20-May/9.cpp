#include <bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    int T;
    cin>>T;
    while(T--){
    lint n;
    cin>>n;
    lint arr[n];
    for(lint j=0;j<n;j++){
        cin>>arr[j];
    } 

    lint count=0;
    lint m=n*(n+1)/2;
   //  lint a[m];
    string str[m]={0};

   for(lint i=0;i<n;i++){
      for(lint j=i;j<n;j++){
         for(lint k=i;k<=j;k++){
            if(i==j){
            str[i+j+j]=to_string(arr[k]);
            }
            else if(i!=j){
            str[i+j]=to_string(arr[k]);
            }
         }
      }
   }

   for(lint j=0;j<m;j++){
         lint l = str[j].length();
         for(lint i=0;i<=j;i++){
            if(str[j].at(i) == l){
               count++;
            }
         }
      }
      cout<<count<<endl;
   }
	return 0;
}
