#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    int T;
    cin>>T;
    while(T--){
        lint n;
        
        cin>>n;
        string s[n];
        
        for(lint i=0;i<n;i++){
            cin>>s[i];
        }

        for(lint i=1;i<n;i++){
            for(lint j=0;j<10;j++){
                if(s[i-1].at(j)!=s[i].at(j)){
                    s[i].at(j)='1';
                    s[i-1].at(j)='0';
                }
                else if((s[i-1].at(j)=='1') && (s[i].at(j)=='1')){
                    s[i].at(j)='0';
                    s[i-1].at(j)='0';
                }
            }
        }
        lint count =0;
        for(lint i=0;i<10;i++){
            if(s[n-1].at(i)=='1'){
                count++;
            }
        }
        cout<<count<<endl;
    }
}