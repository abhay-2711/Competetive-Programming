#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

void uniqueNum(int arr[],int n){
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum=xorSum^arr[i];
    }    
    int tempxor=xorSum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }
int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(newxor^tempxor)<<endl;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    uniqueNum(arr,n);
}