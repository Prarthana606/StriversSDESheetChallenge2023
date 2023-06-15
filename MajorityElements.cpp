#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt=n/2;
	int ans=-1;
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(mp[arr[i]]>cnt)
		{
			ans=arr[i];
		}
	}
	return ans;
}
