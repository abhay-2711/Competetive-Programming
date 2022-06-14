#include<bits/stdc++.h>
using namespace std;

int nthFibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    
    return nthFibonacci(n-2)+nthFibonacci(n-1);
}

int main(){
    int n; cin>>n;
    cout<<nthFibonacci(n)<<endl;
}