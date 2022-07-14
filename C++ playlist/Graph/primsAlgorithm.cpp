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

    int n,m;
    const int N=1e5+3;
    vvi g[N];
    int cost=0;
    vi dist(N), parent(N);
    vector<bool> vis(N);
    const int INF=1e9;

void primsMST(int source){
    rep(i,0,n){
        dist[i]=INF;
    }
    set<vector<int>> s;
    dist[source]=0;
    s.insert({0,source});
    //({wt,vertex})
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        vis[x[1]]=true;
        int u=x[1];
        int v=parent[x[1]];
        int w=x[0];
        cout<<u<<" "<<v<<" "<<w<<endl;
        cost+=w;
        for(auto it: g[x[1]]){
            if(vis[it[0]]){
                continue;
            }
            if(dist[it[0]]>it[1]){
                s.erase({dist[it[0]],it[0]});
                dist[it[0]]=it[1];
                s.insert({dist[it[0]],it[0]});
                parent[it[0]]=x[1];
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    rep(i,0,m){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    primsMST(0);
    cout<<cost<<endl; 
}