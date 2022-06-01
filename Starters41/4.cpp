#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    int T; cin>>T;
    while(T--){
    lint x,y; cin>>x>>y;
    lint c1=0, c2=0;
    if(x==y){
        c1=0;
        c2=0;
    }
    else if(x<y){
        c1=y-x;
    }
    else if(x>y){
        while(y<x){
            y+=2;
            c2++;
        }
        if((x+1)==y){
            c2++;
        }
    }
    cout<<c1+c2<<endl;
}
}
