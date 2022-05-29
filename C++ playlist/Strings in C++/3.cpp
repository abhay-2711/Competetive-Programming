#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="12435";
    // sort(s.begin(),s.end());
    // reverse(s.begin(),s.end());

    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
}