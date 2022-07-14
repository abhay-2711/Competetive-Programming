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

const int INF=1e7;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> dist(n+1,INF);
    vector<vector<pair<int,int>>> graph(n+1); 
    rep(i,0,m){
        int u,v,w; cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int source;cin>>source;
    dist[source]=0;
    set<pair<int,int>> s;
    //{wt,vertex}
    s.insert({0,source});
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto it : graph[x.second]){
            if(dist[it.first]>(dist[x.second]+it.second)){
                s.erase({dist[it.first],it.first});
                dist[it.first]=dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }
    rep(i,1,n+1){
        if(dist[i]<INF){
            cout<<dist[i]<<" ";
        }
        else{
            cout<<"-1"<<" ";
        }
    }
}

