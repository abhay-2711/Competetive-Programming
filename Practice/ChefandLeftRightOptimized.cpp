#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define mod 1000000007

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        lint c=1;
        for(lint i=0;i<s.length();i++){
            if((s[i]=='l') && ((i%2)==0)){
                c=(c*2)%mod;
            }
            else if((s[i]=='l') && ((i%2)!=0)){
                c=(c*2)%mod-1;
            }
            else if((s[i]=='r') && ((i%2)==0)){
                c=(c*2)%mod+2;
            }
            else{
                c=(c*2)%mod+1;
            }
        }
        cout<<c<<endl;
    }
}