#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n=arr.size();
  int max_sum=0;

  for(int i=0;i<n;i++)
  {
    int sum=0;
    for(int j=i;j<n;j++)
    {
      sum+=arr[j];
      if(sum==0)
      {
        max_sum=max(max_sum,j-i+1);
      }
    }
  }
  return max_sum;

}
