#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if((int(s[i])>=65)&&(int(s[i])<=90)){
            s[i]=s[i];
        }
        else if((int(s[i])>=97)&&(int(s[i])<=122)){
            s[i]=s[i]-32;
        }
    }
    cout<<s<<endl;
}
