#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
   int t=n/3;
   vector<int>ans;
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       mp[arr[i]]++;
       if(mp[arr[i]]>t)
       {
           ans.push_back(arr[i]);
           mp[arr[i]]=INT_MIN;
      }

   }
   return ans;

}
