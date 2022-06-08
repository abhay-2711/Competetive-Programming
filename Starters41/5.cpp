#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int main(){
    lint T; cin>>T;
    while(T--){
    lint n;
    cin>>n;
    bool k; cin>>k;
    int arr[n][n];
    lint i;
    lint j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            arr[i-1][j-1]=i+n*(j-1);
        }
    }
    i=1;
    j=1;
    lint sum1=0;
    while((i<=n) && (j<=n)){
        sum1+=i+n*(j-1);
        if((i+j)%2==0){
        j++;
        }
        else{
        i++;
        }
    }
    i=1;
    j=1;
    lint sum2=0;
    while((i<=n) && (j<=n)){
        sum2+=i+n*(j-1);
        if((i+j)%2==0){
        i++;
        }
        else{
        j++;
        }
    }
    if((k==0) && ((sum1%2==0) || (sum2%2==0))){
        cout<<"yes"<<endl;
    }
    else if((k==1) && ((sum1%2!=0) || (sum2%2!=0))){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
   }
}