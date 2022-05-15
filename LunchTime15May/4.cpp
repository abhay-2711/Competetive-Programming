#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long int n, m;
        cin>>n>>m;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        long long int mx=0;
        for(long long int i=0;i<n;i++){
        for(long long int j=0;j<n;j++){
        if((arr[i]-arr[j])>=0){
        long long int p = arr[i]+arr[j]+(arr[i]-arr[j])%m;
        mx = max(mx,p);
        }
        else{
        long long int p = arr[i]+arr[j]+((arr[i]-arr[j])%m+m)%m;
        mx = max(mx,p);
        }
        }
        }
        cout<<mx<<endl;
    }
}