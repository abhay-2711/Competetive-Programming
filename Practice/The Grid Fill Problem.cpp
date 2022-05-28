#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define mod 1000000007

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(n==2){
                    cout<<-1<<" ";
                }
                else{
                if(i==j){
                cout<<-1<<" ";
                }
                else{
                    cout<<1<<" ";
                }
                }
            }
            cout<<endl;
        }
    }
}