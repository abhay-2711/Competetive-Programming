#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    int ans=1;
    while(num){
        ans= ans*num;
        num--;
    }
    return ans;
}

int main(){
    int n; cin>>n;
    int r; cin>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
}