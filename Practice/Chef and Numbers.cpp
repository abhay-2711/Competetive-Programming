#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int arr[n];
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }
        int a[mx+1]={0};
        int c[mx+1]={0};
        
        for(int i=0;i<n;i++){
            if(i==0){
                c[arr[i]]=1;
                a[arr[i]]=1;
            }
            else if((i>0) && (i<n)){
                if((arr[i]==arr[i-1])&&(a[arr[i-1]])==0){
                    c[arr[i]]+=1;
                    a[arr[i]]=1;
                }
                else if((arr[i]==arr[i-1])&&(a[arr[i-1]])==1){
                    a[arr[i]]=0;
                }
                else if(arr[i]!=arr[i-1]){
                    c[arr[i]]+=1;
                    a[arr[i]]=1;
                }
            }
        }
        int mx1=INT_MIN;
        for(int i=0;i<mx+1;i++){
            mx1=max(mx1,c[i]);
        }

        for(int i=0;i<mx+1;i++){
            if(c[i]==mx1){
                cout<<i<<endl;
                break;
            }
        }
    }
}