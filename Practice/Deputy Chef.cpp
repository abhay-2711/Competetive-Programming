#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        int mx=-1;
        for(int i=0;i<n;i++){
            if(i==0){
                int c=n-1;
                if((a[c]+a[i+1])<d[i]){
                    mx=max(mx,d[i]);
                }
            }
            else if((i>0) && (i<n-1)){
                if((a[i-1]+a[i+1])<d[i]){
                    mx=max(mx,d[i]);
                }
            }
            if(i==(n-1)){
                int c=0;
                if((a[c]+a[i-1])<d[i]){
                    mx=max(mx,d[i]);
                }
            }
        }
            cout<<mx<<endl;
        
    }
}