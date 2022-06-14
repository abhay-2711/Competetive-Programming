#include<bits/stdc++.h>
using namespace std;

int fstOccur(int arr[],int n, int i, int key){
    
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
        return fstOccur(arr,n,i+1,key);
}

int lstOccur(int arr[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray=lstOccur(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<fstOccur(arr,7,0,2)<<endl;
    cout<<lstOccur(arr,7,0,2)<<endl;
}