#include <bits/stdc++.h>
using namespace std;
#define lint long long int

void printSubArrays(lint *arr, lint s, lint e, lint n){
    lint count=0;
    lint m=n*(n+1)/2;
    lint a[m];
	if (e == n){
		return;
    }
	else if (s > e){
		printSubArrays(arr, 0, e + 1, n);
    }
	else {
		for (lint i = s; i <= e; i++){
			a[i]=arr[i];
            // while(a[i]!=0){
            //     if(a[i]%10==(e-s+1)){
            //     count++;
            //     a[i]=a[i]/10;
            //     }
            // }
            // cout<<a[i]<<" ";
        }
        // cout<<endl;
    // cout<<count<<endl;
                cout<<e-s+1<<endl;
		printSubArrays(arr, s + 1, e, n);
	}
	return;
}

int main(){
    int T;
    cin>>T;
    while(T--){
    lint n;
    cin>>n;
    lint arr[n];
    for(lint j=0;j<n;j++){
        cin>>arr[j];
    } 
	printSubArrays(arr, 0, 0, n);
    }
	return 0;
}
