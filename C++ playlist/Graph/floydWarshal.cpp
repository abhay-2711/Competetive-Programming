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

const int INF=1e9;

int main(){
    vvi graph = { {0,5,INF,10},
                  {INF,0,3,INF},
                  {INF,INF,0,1},
                  {INF,INF,INF,0}
                };
    int n = graph.size();
    vvi dist=graph;
    rep(k,0,n){
        rep(i,0,n){
            rep(j,0,n){
                if(dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    rep(i,0,n){
        rep(j,0,n){
            if(dist[i][j]==INF){
                cout<<"INF ";
            }
            else{
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}