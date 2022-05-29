#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abhbasbbaab";
    int a[26]={0};
    for(int i=0;i<s.length();i++){
        a[int(s.at(i))-97]+=1;
    }
    int mx=INT_MIN;
    for(int i=0;i<26;i++){
        mx=max(mx,a[i]);
    }
    int k;
    for(int i=0;i<26;i++){
        if(a[i]==mx){
            k=i;
            break;
        }
    }
        // cout<<a[i]<<" ";
    
    cout<<char(97+k)<<endl;
    
}