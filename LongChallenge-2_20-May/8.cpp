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
            return i;
        }
    }
    return -1;
}

void printSubArrays(vector<int> arr, int s, int e)
{
    lint n=arr.size();
    lint m = n * (n + 1) / 2;
        string s1[m];
        for (lint i = 0; i < m; i++)
        {
            s1[i] = "";
        }
        lint c = 0;
	if (e == arr.size()){
		return;
    }
	else if (s > e){
		printSubArrays(arr, 0, e + 1);
    }
	else {
        lint k;
        lint i;
		for (i = s; i <= e; i++){
			cout << arr[i] << "";
            s1[c] += to_string(arr[i]);
        }
        c++;
        cout<<endl;
        
		printSubArrays(arr, s + 1, e);
	}
    lint count = 0;
        for (lint j = 0; j < m; j++)
        {
            lint l = s1[j].length();
            string s2 = to_string(l);
            lint res = isSubstring(s2,s1[j]);
            if (res == -1){
            continue;
            }
            else{
            count++;
            }

        }
        cout << count << endl;
	return;
}



int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        vector<int> arr;
        lint n;
        cin>>n;
        for(lint i=0;i<n;++i){
            int x;
            cin>>x;
            arr.push_back(x);
        }
	    printSubArrays(arr, 0, 0);
    return 0;
}
}