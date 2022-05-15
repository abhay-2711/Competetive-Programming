#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int w, x, y, z;
        cin>>w>>x>>y>>z;
        if(w+y*z>x){
            cout<<"overFlow"<<endl;
        }
        else if(w+y*z==x){
            cout<<"filled"<<endl;
        }
        else{
            cout<<"Unfilled"<<endl;
        }
    }
}