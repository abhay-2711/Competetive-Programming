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

const int N=1e5+2;
vi adj[N];
bool vis[N];

bool iscycle(int src,vvi &adj,vector<bool> &visited,int parent){
    visited[src]=true;
    for(auto i : adj[src]){
        if(i != parent){
            if(visited[i]){
                return true;
            }
            if(!visited[i] and iscycle(i,adj,visited,src)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,m; cin>>n>>m;
    vvi adj(n);
    rep(i,0,m){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cycle = false;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(!visited[i] and iscycle(i,adj,visited,-1)){
            cycle=true;
        }
    }
    if(cycle){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }
}