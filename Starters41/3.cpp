#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; cin>>T;
    while(T--){
    int v, x, y, z; cin>>v>>x>>y>>z;
    if((v>=x)&&(y>=z)){
        int d=v-y;
        if(d){
            cout<<"Q"<<endl;
        }
        else if(d<0){
            cout<<"P"<<endl;
        }
        else{
            cout<<"tie"<<endl;
        }
    }
    
    else if((v>=x)&&(y<=z)){
        int d=v-z;
        if(d){
            cout<<"Q"<<endl;
        }
        else if(d<0){
            cout<<"P"<<endl;
        }
        else{
            cout<<"tie"<<endl;
        }
    }
    else if((v<=x)&&(y>=z)){
        int d=x-y;
        if(d){
            cout<<"Q"<<endl;
        }
        else if(d<0){
            cout<<"P"<<endl;
        }
        else{
            cout<<"tie"<<endl;
        }
    }
    else if((v<=x)&&(y<=z)){
        int d=x-z;
        if(d){
            cout<<"Q"<<endl;
        }
        else if(d<0){
            cout<<"P"<<endl;
        }
        else{
            cout<<"tie"<<endl;
        }
    }
    
    }
}
