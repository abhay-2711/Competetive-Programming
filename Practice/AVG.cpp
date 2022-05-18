#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        long long int v;
        cin>>n>>k>>v;
        long long int arr[n];

        long long int sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        long long int x = (v*(n+k)-sum)/k;
        if((x*k+sum) == (v*(n+k)) && x>0){
            cout<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}