#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int xorCount(lint a[],lint b[],lint n){
    int c=0,i=0,j=1;
    if((a[i]^a[j])==(b[i]^b[j])){
        c++;
    }
}

int main(){
    lint T;
    cin>>T;
    while(T--){
        lint n;
        cin>>n;
        lint a[n];
        for(lint i=0;i<n;i++){
            cin>>a[i];
        }
        lint b[n];
        for(lint i=0;i<n;i++){
            cin>>b[i];
        }
        lint c=0;
        for(lint i=0;i<n;i++){
                   
        }
        int i=0,j=1;
        lint result=xorCount(a,b,n);
        cout<<c<<endl;
    }
}