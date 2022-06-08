#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    int T; cin>>T;
    while(T--){
        lint x; cin>>x;
        for(lint i=1;i<pow(2,5);i++){
            if(((x&&i)==1)&&((x^i)==1)){
                cout<<i<<endl;
                break;
            }
        }
    }
}