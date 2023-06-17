#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    ans.push_back(intervals[0]);
    int ind=0;
    for(int i=1;i<intervals.size();i++)
    {
        if(ans[ind][1]>=intervals[i][0])
        {
            ans[ind][1]=max(ans[ind][1],intervals[i][1]);
        }
        else{
            ans.push_back(intervals[i]);
            ind++;
        }
    }
    return ans;
}
