#include<bits/stdc++.h>
using namespace std;

void fact(int num){
    int ans=1;
    while(num){
        ans= ans*num;
        num--;
    }
    cout<<ans<<endl;
    return;
}

int main(){
    int n; cin>>n;
    fact(n);
}