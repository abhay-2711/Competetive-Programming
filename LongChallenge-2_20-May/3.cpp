#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=0){
                return i;
                break;
            }
        }
    }
}