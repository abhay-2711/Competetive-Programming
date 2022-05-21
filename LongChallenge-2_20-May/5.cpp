#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int highestPowerof2(lint k){
    lint res;
    if(k==1){    
        res = pow(2,0);
    }
    else if(k==0){
        res=0;
    }
    else{
        res=pow(2,int(log2(k)));
    }
    return res;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        lint n;
        cin>>n;
        lint arr[n];
        lint count = 0;
        lint mx=INT_MIN;
        
        for(lint i=0;i<n;i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }

        while(mx){
        
        lint p = highestPowerof2(mx);
        bool check=0;
        for(lint i=0;i<n;i++){
            if(arr[i]>=p){
                arr[i]=arr[i]-p;
                check=1;
            }
        }
        if(check==1){
            count++;
        }
        mx=INT_MIN;
        for(lint i=0;i<n;i++){
            mx=max(mx,arr[i]);
        }
        }
cout<<count<<endl;
    }
}