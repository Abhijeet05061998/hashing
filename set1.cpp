#include<bits/stdc++.h>
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	unordered_set<int>s(arr,arr+n);
	cout<<s.size();
}