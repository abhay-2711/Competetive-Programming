#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int arr[n];
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }
     mx=mx+1;
     int a[mx];
        for(int i=0;i<mx;i++){
            a[i]=0;
        }
        bool check = 0;
        for(int i=0;i<n;i++){
            if(a[arr[i]]==0){
            a[arr[i]]+=1;
            }
            else if((a[arr[i]]!=0)&&(arr[i-1]==arr[i])){
            a[arr[i]]+=1;
            }
            else{
                check=1;
            }
        }
        for(int i=0;i<mx;i++){
            for(int j=i+1;j<mx;j++){
            if((a[i]!=0) && (a[i]==a[j]) && (a[j]!=0)){
                check=1;
                break;
            }
            }
            if(check==1){
                break;
            }
        }
        if(check==1){
            cout<<"NO"<<endl;
        }
        else if(check==0){
            cout<<"YES"<<endl;
        }
    }
}