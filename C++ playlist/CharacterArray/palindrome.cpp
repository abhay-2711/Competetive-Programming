#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    char c[n+1];
    cin>>c;
    bool check=1;
    for(int i=0;i<n;i++){
        if(c[i] != c[n-1-i]){
            check=0;
            break;
        }
        else{
            continue;
        }
    }
    if(check==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}