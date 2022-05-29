#include<bits/stdc++.h>
using namespace std;

void printFibo(int num){
    int t1=0, t2=1;
    int nextTerm;
    while(num--){
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    } 
    return;
}

int main(){
    int n; cin>>n;
    printFibo(n);
}