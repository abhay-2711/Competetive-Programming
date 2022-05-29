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
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }    
}

