#include <bits/stdc++.h>
using namespace std;

void printSubsequences(vector<int> arr , int idx, vector<int> subarr, int n)
{
	if (idx == n)
	{
		for (auto it:subarr){
		cout << it << " ";
		}
	if(subarr.size()==0)
		cout<<"{}";
	
	cout<<endl;
	return;

		
	}
	else
	{
		subarr.push_back(arr[idx]);
		printSubsequences(arr, idx + 1, subarr,n);
		subarr.pop_back();

		printSubsequences(arr, idx + 1, subarr,n);
	}
	
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        vector<int> arr;
        int n;
        cin>>n;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            arr.push_back(x);
        }
	vector<int> vec;
	
	printSubsequences(arr, 0, vec,n);
    }

	return 0;
}

