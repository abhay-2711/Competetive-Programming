#include<bits/stdc++.h>
using namespace std;

int isPowerOf2(int n){
    return (n && !(n & n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<isPowerOf2(n)<<endl;
}

//( n-1 ) can be derived from n as flip all bits starting from leftmost set bit to end
//e.g. 8=1000   7=0111
//( n & (n-1) ) has exactly same bits as n except the leftmost setBit;