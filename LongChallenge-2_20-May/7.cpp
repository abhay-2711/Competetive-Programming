#include <bits/stdc++.h>
using namespace std;
#define lint long long int

int isSubstring(string s1, string s2)
{
    lint M = s1.length();
    lint N = s2.length();

    for (lint i = 0; i <= N - M; i++)
    {
        lint j;
        for (j = 0; j < M; j++)
        {
            if (s2[i + j] != s1[j])
            {
                break;
            }
        }
        if (j == M)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        lint n;
        cin>>n;
        lint arr[n];
        for(lint j=0;j<n;j++){
            cin>>arr[j];
        }
        lint m = n * (n + 1) / 2;
        string s1[m];
        for (lint i = 0; i < m; i++)
        {
            s1[i] = "";
        }
        lint c = 0;
        for (lint i = 0; i < n; i++)
        {
            for (lint j = i; j < n; j++)
            {
                for (lint k = i; k <= j; k++)
                {
                    s1[c] += to_string(arr[k]);
                }
                c++;
            }
        }
        lint count = 0;
        for (lint j = 0; j < m; j++)
        {
            lint l = s1[j].length();
            string s2 = to_string(l);
            lint res = isSubstring(s2,s1[j]);
            // if (res == -1){
            // continue;
            // }
            // else{
            if(res!=-1){
            count++;
            }
// cout<<s1[j]<<" "<<s2<<endl;
        }
        cout << count << endl;
    }
    return 0;
}