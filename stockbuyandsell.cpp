#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices){
    // Write your code here.
   int minprof=INT_MAX;
   int maxprof=0;
   for(int i=0;i<prices.size();i++)
   {
       minprof=min(minprof,prices[i]);
       maxprof=max(maxprof,prices[i]-minprof);
   }
   return maxprof;
}
