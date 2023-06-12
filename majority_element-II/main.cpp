#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &a)
{
    // Write your code here.
    int n = a.size();
    vector<int>ans;
    int c = 0;
    unordered_map<int,int>h;
    for(int i = 0; i < n; i++)
    {
        h[a[i]]++;
    }
    for(auto i : h)
    {
        if(i.second > n/3)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}
