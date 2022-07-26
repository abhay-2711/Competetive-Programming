#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node* next[2];
    node(){
        for(int i=0;i<2;i++){
            next[i]=NULL;
        }
    }
};

node* trie;
void insert(int num){
    node* it=trie;
    for(int i= sizeof(int)-1;i>=0;i--){
        int cur_bit=(num>>i)&1;
        if(!it->next[cur_bit]){
            it->next[cur_bit]=new node();
        }
        it=it->next[cur_bit];
    }
}

int query(int num){
    node* it=trie;
    int ans=0;
    for(int i = sizeof(int) -1;i>=0;i--){  // int_size instead of sizeof(int)
        int cur_bit=(num>>i)&1;
        int opposite=cur_bit ^ 1;
        if(it->next[opposite]){
            it=it->next[opposite];
            ans |= 1<<i;
        }
        else{
            it=it->next[opposite ^ 1];
        }
    }
    return ans;
}

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>n;
    }
    trie=new node();
    insert(0);
    vector<int> rmax(n+1,0);
    int R=0;
    for(int i=n-1;i>=0;i--){
        R=R ^ a[i];
        if(i!=n-1){
            rmax[i]=max(rmax[i+1],query(R));
            insert(R);
        }
        else{
            rmax[i]=query(R);
            insert(R);
        }
    }
    free(trie);
    trie=new node();
    insert(0);
    int ans=0;
    int L=0;
    for(int i=0;i<n;i++){
        L=L ^ a[i];
        ans=max(ans,rmax[i+1]+query(L));
        insert(L);
    }
    cout<<ans;
}