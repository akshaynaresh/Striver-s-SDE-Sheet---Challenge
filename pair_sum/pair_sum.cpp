/*
 *
 * Author : Akshay Dwivedi
 * Copyright 2023
 *
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"


void messi()
{
    int n, sum;
    cin >> n >> sum;
    vector<int>a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    unordered_map<int,int>h;
    vector<vector<int>>ans;
    for(auto i : a)
    {
        vector<int>pair(2);
        int count = h[sum - i];
        pair[0] = i;
        pair[1] = sum - i;
        while(count--)
            ans.push_back(pair);
        h[i]++;
    }
    for(auto &i : ans)
        sort(i.begin(), i.end());
    sort(ans.begin(), ans.end());
    for(auto &i : ans)
    {
        for(auto &j : i)
            cout << j << " ";
        cout << endl;
    }
}

int main()
{
 // #ifndef ONLINE_JUDGE 
 // freopen("input.txt","r",stdin);  
 // freopen("output.txt","w",stdout);   
 // #endif 

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // int n;
  // cin >> n;
//  int t = 1;
//  for( cin >> t; t--;)
//  {
//    messi();
//  }
   messi();
}


