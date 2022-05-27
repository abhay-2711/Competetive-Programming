#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        
        lint a=0,b=0,c=0,p=1;
        lint c1=0;
        for(lint i=0;i<n/2;i++){
            if((n>=p+3)&&(a==0)){
                p+=3;
                a=1;b=0;c=0;
                c1++;
            }
            else if((n>=p+3)&&(a==1)){
                p+=2;
                a=0;b=0;c=0;
                c1++;
            }
            else if((n<p+3)&&(n<=2+p)&&(n>1+p)&&(b==0)){
                p+=2;
                a=0;b=1;c=0;
                c1++;
            }
            else if((n<p+3)&&(n<=2+p)&&(n>1+p)&&(b==1)){
                p+=1;
                a=0;b=0;c=0;
                c1++;
            }
            else if((n<p+2)&&(n>=1+p)&&(c==0)){
                p+=1;
                a=0;b=0;c=1;
                c1++;
            }
            if(p==n){
                break;
            }
        }
        if(p==n){
            cout<<c1<<endl;
        }
    }
}