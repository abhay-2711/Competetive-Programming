#include<bits/stdc++.h>
using namespace std;
#define lint long long int

int highestPowerof2(lint k){

    lint res = 0;
    for (lint i=k;i>=1;i--){
        if ((i & (i-1)) == 0){
            res = i;
            break;
        }
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
        lint mn=INT_MAX;
        lint r=n;
        lint count = 0;

        for(lint i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                    r--;
                    }
                }

        while(r){
            
            for(lint i=0;i<r;i++){
                mn=min(mn,arr[i]);
            }
            lint p = highestPowerof2(mn);
            for(lint i=0;i<r;i++){
                arr[i]=arr[i]-p;
            }
            for(lint i=0;i<r;i++){
                if(arr[i]==0){
                    r--;
                }
            }

            cout<<mn<<endl;
            count++;
        }
        cout<<count<<endl;
    }


        
    