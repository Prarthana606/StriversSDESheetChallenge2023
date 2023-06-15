#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
  long long int sum=0;
  long long int maxsum=LONG_MIN;
  for(int i=0;i<n;i++)
  {
      sum=sum+arr[i];
      if(sum<0)
      sum=0;
      maxsum=max(maxsum,sum);
  }
  return maxsum;
}
