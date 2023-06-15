#include <bits/stdc++.h>
vector<int> merge(vector<int>&arr1, vector<int>&arr2,int m,int n)
{
	int i=0;
	int j=0;
	int cnt=0;
	vector<int>v;
	while(i<arr1.size()&&j<arr2.size())
	{
		if(arr1[i]<arr2[j])
		{
			v.push_back(arr1[i]);
			i++;
		}
		else if(arr1[i]==arr2[j])
		{
			v.push_back(arr1[i]);
			i++;
		}
		else if(arr1[i]>arr2[j]){
			v.push_back(arr2[j]);
			j++;
		}

	}
	while(i<arr1.size())
	{
	   v.push_back(arr1[i]);
	   i++;
	}
	while(j<arr2.size())
	{
		v.push_back(arr2[j]);
		j++;
	}
	return v;
}
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int>a1;
	for(int i=0;i<arr1.size();i++)
	{
		if(arr1[i]!=0)
		{
            a1.push_back(arr1[i]);
		}
	}
	return merge(a1,arr2,m,n);


}
