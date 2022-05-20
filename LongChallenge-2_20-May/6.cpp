#include<bits/stdc++.h>
using namespace std;
#define lint long long int
int main(){
    int T;
    cin>>T;
    while(T--){
        lint n;
        cin>>n;
        int k=1;
        string s[k];
        
        for(int i=0;i<k;i++){
            
            cin>>s[i];
        }
        lint count=0;
        for(lint i=0;i<n/2;i++){
            
            if(s[0].at(i)==s[0].at(n-1-i)){
            continue;
            }
            else{
                count++;
            }
        }
        if(count%2==0){
            count=count/2;
        }
        else{
            count=count/2+1;
        }
    }
}