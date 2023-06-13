/*
 *
 * Author : Akshay Dwivedi
 *
 * Time : 2023-04-02
 * Copyright 2023
 *
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

void messi()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    unordered_map<int,int>h;
    int sum = 0, maxi = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum == 0)
            maxi = i+1;
        else
        {
            if(h.find(sum) != h.end())
                maxi = max(maxi, i - h[sum]);
            else
                h[sum] = i;
        }
    }
    cout << maxi << endl;
}

int main()
{
    /* #ifndef ONLINE_JUDGE */ 
    /* freopen("input.txt","r",stdin); */  
    /* freopen("output.txt","w",stdout); */   
    /* #endif */ 

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /* int t = 1; */
    /* for( cin >> t; t--;) */
    /* { */
    /*      messi(); */
    /* } */
    messi();
}


