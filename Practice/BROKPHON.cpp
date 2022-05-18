#include<bits/stdc++.h>
using namespace std;

#define lint long long int

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        lint arr[n];
        int a[n]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                a[i]=1;
                a[i+1]=1;
            }
        }
        int b=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                b++;
        }
        }
        cout<<b<<endl;
    }
}