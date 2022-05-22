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
lint c=0;
   for(lint i=0;i<n;i++){
      for(lint j=i;j<n;j++){
         for(lint k=i;k<=j;k++){
            str[c]+=to_string(arr[k]);
        }
        c++;
      }
   }

   for(lint j=0;j<m;j++){
         lint l = int(str[j].length());
        //  for(lint i=0;i<l;i++){
        //     if(int(str[j].at(i)) == l){
        //        count++;
        //     }
        //  }
         cout<<str[j]<<" "<<l<<" "<<endl;
      }
    //   cout<<count<<endl;
   }
    return 0;
}