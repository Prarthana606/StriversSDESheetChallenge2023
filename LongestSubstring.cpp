#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    //Write your code here

    int maxnum=INT_MIN;
    unordered_set<int>s;
    if(input.size()==0)
    {
        return 0;
    }
    int l=0;
    for(int r=0;r<input.size();r++)
    {

        if(s.find(input[r])!=s.end())
        {
            while(l<r && s.find(input[r])!=s.end())
            {
                s.erase(input[l]);
                l++;
            }
        }
        s.insert(input[r]);
        maxnum=max(maxnum,r-l+1);


    }
    return maxnum;



}
