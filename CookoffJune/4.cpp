#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    lint T; cin>>T;
    while(T--){
        lint n; cin>>n;
        lint x; cin>>x;
        while(n>x){
            if(x%2==0){
                n=n-2;
            }
            else if(x%2!=0){
                n=n-1;
            }
        }
        if(n==x){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}