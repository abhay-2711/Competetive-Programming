#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int sum=0;
    int originaln=n;
    while(n){
        int l = n%10;
        sum+=pow(l,3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}