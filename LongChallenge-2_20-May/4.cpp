#include<bits/stdc++.h>
using namespace std;
#define lint long long int
int main(){
    int T;
    cin>>T;
    while(T--){
        lint n;
        cin>>n;
        lint a,b,c,d;
        cin>>a>>b>>c>>d;
        lint k=max(a,max(b,max(c,d)));
        if((a+b+c+d) == n){
        cout<<k<<endl;
        }
    }
}