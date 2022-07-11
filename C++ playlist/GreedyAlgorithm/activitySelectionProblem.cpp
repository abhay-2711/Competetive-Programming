#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int main(){
    int n; cin>>n;
    vector<vector<int>> v;
    rep(i,0,n){
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    }
    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    });
    int take=1;
    int end=v[0][1];
    for(int i=1;i<n;i++){
        if(v[i][0]>=end){
            take++;
            end=v[i][1];
        }
    }
    cout<<take<<"\n";
}
