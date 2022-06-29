#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    int n=s.length();

    stack<char> st;
    bool ans=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i]==')' && st.top()=='('){
            st.pop();
        }
        else if(!st.empty() && s[i]=='}' && st.top()=='{'){
            st.pop();
        }
        else if(!st.empty() && s[i]==']' && st.top()=='['){
            st.pop();
        }
        else{
            ans=false;
            break;
        }
    }
    if(!st.empty()){
        return false;
    }
    return ans;
}

int main(){
    string s="{([])}(";
    
    cout<<isValid(s)<<endl;
}