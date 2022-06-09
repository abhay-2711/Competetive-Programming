#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    int T; cin>>T;
    while(T--){
        lint x, y;
        cin>>x>>y;
        int count=0;
        bool check=0;
        int a=0;
        while(1){
            if(a==0){
            x=abs(x-y);
            if((abs(x)%3)==0){
                check=1;
                break;
            }
            a=1;
            }
            else if(a==1){
            y=abs(x-y);
            if((abs(y)%3)==0){
                check=1;
                break;
            }
            a=0;
            }
            count++;
        }
        if(check==1){
            cout<<count<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}