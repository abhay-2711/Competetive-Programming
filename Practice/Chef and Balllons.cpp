#include<bits/stdc++.h>
using namespace std;

#define lint long long int

int main(){
    int T;
    cin>>T;
    while(T--){
        lint r,g,b;
        cin>>r>>g>>b;
        lint k;
        cin>>k;
        lint c,d,e;
        c=min(r,min(g,b));
        e=max(r,max(g,b));
        d=r+g+b-c-e;
        if(k<=c){
            cout<<3*k-2<<endl;
        }
        else if(k>c && k<=d){
            cout<<3*c+2*(k-c)-1<<endl;
        }
        else if(k>d && k<=e){
            cout<<c+d+k<<endl;
        }
    }
}