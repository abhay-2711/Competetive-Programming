#include<bits/stdc++.h>
using namespace std;

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

vector<bool> vis;
int n,m;
vvi adj;
vi components;

int get_comp(int idx){
    if(vis[idx]){
        return 0;
    }
    vis[idx]=true;
    int ans=1;
    for(auto i : adj[idx]){
        if(!vis[i]){
            ans+=get_comp(i);
            vis[i]=true;
        }
    }
    return ans;
}

int main(){
    cin>>n>>m;
    adj = vvi (n);
    vis = vector<bool>(n,false);
    rep(i,0,m){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(int i=0;i<n;i++){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }
    // for(auto i : components){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    long long ans=0;
    for(auto i: components){
        ans+=i*(n-i);
    }
    cout<<(ans/2)<<endl;
}