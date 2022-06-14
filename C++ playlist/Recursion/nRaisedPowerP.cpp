#include<bits/stdc++.h>
using namespace std;

int nRaisedPowerP(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower=nRaisedPowerP(n,p-1);
    return n*prevPower;
}

int main(){
    int n,p; cin>>n>>p;
    cout<<nRaisedPowerP(n,p)<<endl;
}