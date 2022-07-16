#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
const int MOD=1e9+6;

int minSquare(int n){
    if(n==0 || n==1 || n==2 || n==3){
        return n;
    }
    int ans=MOD;
    for(int i=1;i*i<=n;i++){
        ans=min(ans,1+minSquare(n-i*i));
    }
    return ans;
}

int main(){
    int n; cin>>n;
    cout<<minSquare(n)<<endl;
}