#include<bits/stdc++.h>
using namespace std;

#define vvi vector<vi>
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int inf=1e9;

int main(){
    int n; cin>>n;
    vi arr(n);
    rep(i,0,n){
        cin>>arr[i];
    }
    vi jumps(n,inf);
    if(arr[0]==0){
        cout<<inf<<" ";
        return 0;
    }
    jumps[0]=0;
    rep(i,1,n){
        rep(j,0,i){
            if(i<=(j+arr[j])){
                jumps[i]=min(jumps[i],jumps[i]+1);
            }
        }
    }
    cout<<jumps[n-1];
}