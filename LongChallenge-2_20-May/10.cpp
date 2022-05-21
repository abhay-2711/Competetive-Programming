#include <bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    int T=1;
    // cin>>T;
    while(T--){
    lint n=3;
    // cin>>n;
    lint arr[n]={1,2,3};
    // for(lint j=0;j<n;j++){
    //     cin>>arr[j];
    // } 
    lint count=0;
    lint m=n*(n+1)/2;
    string str[m];
   //  lint a[m];
   for(lint i=0;i<m;i++){
    str[i]="";
   }

   for(lint i=0;i<n;i++){
      for(lint j=i;j<n;j++){
         for(lint k=i;k<=j;k++){
            if(i==j && i>0 && j>0){
            str[i+j+1]+=to_string(arr[k]);
            }
            else{
            str[i+j]+=to_string(arr[k]);
            }
         }
      }
   }

   for(lint j=0;j<m;j++){
         lint l = str[j].length();
         for(lint i=0;i<l;i++){
            if(str[j].at(i) == l){
               count++;
            }
         }
        cout<<str[j]<<endl;
      }
    //   cout<<count<<endl;
   }
    return 0;
}