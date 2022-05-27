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
        lint l = s.length() + 1;
        lint n = pow(2,l) - 1;
        
        lint arr[n];
        lint c=0,e=0,o=0;
        for(lint i=1;i<=l;i++){
            if(i==1){
                arr[0]=1;
                c++;
                e=2;
                o=3;
            }
            else if((i>1)&&((i%2)==0)){
                lint k=c;
                for(lint j=k;j<k+pow(2,i-1);j++){
                    arr[j]=e;
                    e=e+2;
                    c++;
                }
            }
            else if((i>1)&&((i%2)!=0)){
                lint k=c;
                for(lint j=k;j<k+pow(2,i-1);j++){
                    arr[j]=o;
                    o=o+2;
                    c++;
                }
            }
        }
        lint a[n];
        // for(lint i=0;i<n;i++){
        //     a[i]=i+1;
        // }
        lint p=1;
        for(lint i=0;i<s.length();i++){
            for(lint j=0;j<n;j++){
                if(s.at(i)=='l'){
                    p=p*2;
                    break;
                }
                else if(s.at(i)=='r'){
                    p=p*2+1;
                    break;
                }
            }
        }
        p=p-1;
        cout<<arr[p]%mod<<endl;
    }
}