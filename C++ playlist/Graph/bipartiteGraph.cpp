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

vvi adj;
vector<bool> vis;
vi col;
bool bipart;

void color(int u,int curr){
    if(col[u]!=-1 && col[u]!=curr){
        bipart = false;
        return;
    }
    col[u]=curr;
    if(vis[u]){
        return;
    }
    vis[u]=true;
    for(auto i : adj[u]){
        color(i,curr ^ 1);
    }
}

int main(){
    bipart=true;
    int n,m;
    cin>>n>>m;
    adj=vvi (n);
    vis=vector<bool>(n,false);
    col=vector<int>(n,-1);
    rep(i,0,m){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    rep(i,0,n){
        if(!vis[i]){
            color(i,0);
        }
    }
    if(bipart){
        cout<<"Graph is bipartite";
    }
    else{
        cout<<"Graph is not bipartite";
    }
}