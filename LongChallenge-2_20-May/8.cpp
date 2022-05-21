#include <bits/stdc++.h>
using namespace std;
#define lint long long int

void printSubArrays(lint *arr, lint s, lint e, lint n){
    lint count=0;
    lint m=n*(n+1)/2;
    lint a[m];
    string str[m]={0};

    for(lint j=0;j<m;j++){
        lint l = str[j].length();

        for(lint i=0;i<=j;i++){
            if(str[j].at(i) == l){
                count++;
            }
        }
    }

	if (e == n){
		return;
    }
	else if (s > e){
		printSubArrays(arr, 0, e + 1, n);
    }
	else {
        lint k;
		for (lint i = s; i <= e; i++){
			// a[i]=arr[i];
            k=arr[i];
            // while(a[i]!=0){
            //     if(a[i]%10==(e-s+1)){
            //     count++;
            //     a[i]=a[i]/10;
            //     }
            // }

            cout<<k;
        }



        // for(lint j=0;j<m;j++){
        //     if(str[j] == to_string(0)){
        //     str[j]=to_string(k);
        //     cout<<str[j];
        //     }
        //     cout<<endl;
        //     break;
        // }
        
        // for(lint j=0;j<m;j++){
        //     cout<<str[j]<<endl;
        // }
    // cout<<count<<endl;
                // cout<<e-s+1<<endl;
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
