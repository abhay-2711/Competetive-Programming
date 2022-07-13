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

bool iscycle(int src,vvi &adj,vector<bool> &visited,vi &stack){
    stack[src]=true;
    for(auto i : adj[src]){
        
        if(stack[i]){
            return true;
        }
        if(!visited[i] and iscycle(i,adj,visited,stack)){
            return true;
        }
        
    }
    stack[src]=false;
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
    vi stack(n,0);
    vector<bool> visited(n,0);
    for(int i=0;i<n;i++){
        if(!visited[i] and iscycle(i,adj,visited,stack)){
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