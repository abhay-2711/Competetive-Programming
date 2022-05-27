#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        lint x,y;
        cin>>x>>y;
        lint arr[n];
        for(lint i=0;i<n;i++){
            cin>>arr[i];
        }
        lint d=0;
        for(lint i=0;i<n;i++){
            if(arr[i]<=y){
                d+=arr[i];
            }
            else if(arr[i]>y){
                d = d + y;
            }
        }
        if(d>x){
            cout<<"coupon"<<endl;
        }
        else if(d<=x){
            cout<<"no coupon"<<endl;
        }
    }
}