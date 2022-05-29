#include<bits/stdc++.h>
using namespace std;
#define lint long long int

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
                    if(s.at(i)==' '){
                        c++;
                    }
                }
                int n=c+1;
                // for(int i=0;i<l;i++){
                //     if(int(s.at(i)-48)==(((l+2)/2)-1)){
                //         c++;
                //     }
                // }
                // cout<<c<<endl;
            if((c-1)<((l+2)/2)-1){
                for(int i=0;i<l;i++){
                    if(((((l+2)/2)-1)!=(int(s.at(i))-48))&&(s.at(i)!=' ')){
                        mx=max(mx,(int(s.at(i))-48));
                    }
                }
            }
            else if((c-1)==((l+2)/2)-1){
                cout<<((l+2)/2)-1<<endl;
            }
        // cout<<s<<endl;
        if((c-1)<((l+2)/2)-1){
        cout<<mx<<endl;
        }
    }
}