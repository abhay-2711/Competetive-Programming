#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        bool check=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;++i){
        if(arr[i-1]>arr[i]){
                cout<<"no"<<endl;
                check=1;
                break;
            }
            else{
                continue;
            }
        }
        if(check==0){
            cout<<"yes"<<endl;
        }
    }
}