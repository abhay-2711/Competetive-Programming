#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n){
        int temp=n%10;
        sum = sum*10 + temp;
        n=n/10;
    }
    cout<<sum<<endl;
}