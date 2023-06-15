#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
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
