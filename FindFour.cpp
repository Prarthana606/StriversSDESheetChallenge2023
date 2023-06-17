#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
   sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           int l=j+1;
           int r=n-1;
           while(l<r)
           {
               int sum=arr[i]+arr[l]+arr[j]+arr[r];
               if(sum==target)
               {
                   return "Yes";
               }
               else if(sum<target)
               {
                  l++;
               }
               else{
                   r--;
               }
           }
       }
   }
   return "No";
}

