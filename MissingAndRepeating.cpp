#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here

	int g=(n*(n+1))/2;
	int c=0;
	int m=0;
	 sort(arr.begin(),arr.end());
	 for(int i=0;i<n;i++)
	 {
		 c+=arr[i];
	 }
	 for(int i=0;i<n;i++)
	 {
		 if(arr[i]==arr[i+1])
		 {
			 m=arr[i];
		 }
	 }
	 int d=g+m-c;

	 return {d,m};

}
