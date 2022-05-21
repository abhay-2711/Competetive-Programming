#include<bits/stdc++.h>
using namespace std;
#define lint long long int

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
    lint i, j;
    lint count=0;
    lint c=n*(n+1)/2;
    lint a[c];
    lint k;
    for(j=0;j<n;j++){
    for(i=j;i<n;i++){
    for(k=j;k<=i;k++){
        a[k]=arr[k];
        cout<<a[k]<<" ";
    }
    
    cout<<endl;
    }
    }

// for(int i=0;i<c;i++){
//         while(a[k]!=0){
//         if(a[k]%10==(i-j+1)){
//             count++;
//             a[k]=a[k]/10;
//         }
//         }
//     }
    // cout<<count<<endl;
}
return 0;
}
            