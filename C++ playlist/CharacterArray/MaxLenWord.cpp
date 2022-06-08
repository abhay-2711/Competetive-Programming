#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();
    char c[n+1];

    cin.getline(c,n);
int i=0;
int currLength=0, maxLength=0;
int st=0, maxst=0;
    while(1){
        if(c[i]==' ' || c[i]=='\0'){
            if(currLength>maxLength){
                maxLength=currLength;
                maxst=st;
            }
            currLength=0;
            st=i+1;
        }
        else{
            currLength++;
        }
        if(c[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLength<<endl;
    for(int i=0;i<maxLength;i++){
        cout<<c[i+maxst];
    }
}