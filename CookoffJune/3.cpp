#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    lint T; cin>>T;
    while(T--){
        lint n; cin>>n;
        lint arr[n];
        for(lint i=0;i<n;i++){
            cin>>arr[i];
        }
        lint sum=0;
        lint mx=INT_MIN;
        for(lint i=0;i<n;++i){
            if(i==0){
                sum=arr[i]+arr[n-1];
            }
            else{
                sum=arr[i-1]+arr[i];
            }
            mx=max(mx,sum);
        }
        cout<<mx<<endl;
    }
}