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

void dfs(int node){
    //preorder
    vis[node]=1;
    //inorder
    vi :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }
    //postorder
    cout<<node<<" "; //moving line
}

int main(){
    rep(i,0,N){
        vis[i]=0;
    }
    int n,m;
    cin>>n>>m;
    rep(i,0,m){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
}