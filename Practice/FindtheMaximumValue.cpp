#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin.ignore();
        getline(cin,s);
        // cin>>s;
        int mx=INT_MIN;
        int l=s.length();
        // cout<<l<<endl;
        int c=0;
                for(int i=0;i<l;i++){
                    if(s.at(i)==(((l+2)/2)-1)){
                        c++;
                    }
                }
            if(c<((l+2)/2)-1){
                for(int i=0;i<l;i++){
                    if(((((l+2)/2)-1)!=(int(s.at(i))-48))&&(s.at(i)!=' ')){
                        mx=max(mx,(int(s.at(i))-48));
                    }
                }
            }
            else{
                cout<<((l+2)/2)-1<<endl;
            }
        // cout<<s<<endl;
        if(c<((l+2)/2)-1){
        cout<<mx<<endl;
        }
    }
}