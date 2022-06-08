#include<bits/stdc++.h>
using namespace std;

int clearBit(int n, int pos){
    return ((n&(~(1<<pos)))!=0);
}

int main(){
    int n; cin>>n;
    int pos; cin>>pos;
    cout<<clearBit(n,pos)<<endl;
}