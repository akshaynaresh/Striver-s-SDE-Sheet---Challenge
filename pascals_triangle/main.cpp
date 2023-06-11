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

ll findnCr(int n, int r)
{
    ll res = 1;
    for(int i = 0; i < r; i++)
    {
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}

void messi()
{
    int n;
    cin >> n;

    //code for printing a certain row in the pascal
    //trianle.

    // this code gives time complexity of O(nxr)

    /* for(int i = 1; i <= n; i++) */
    /* { */
    /*     cout << findnCr(n-1,i-1) << " "; */
    /* } */

    //this code gives the time complexity of O(n)
    //and space complexity of O(1).

    /* int ans = 1; */
    /* cout << ans << " "; */
    /* for(int i = 1; i < n; i++) */
    /* { */
    /*     ans = ans*(n-i); */
    /*     ans = ans/i; */
    /*     cout << ans << " "; */
    /* } */
    /* cout << endl; */

    //now the code to print the entire pascal triangle

    vector<vector<int>>a(n+1);
    int ans = 1;
    for(int i = 1; i <= n; i++)
    {
        /* cout << ans << " "; */
        a[i].push_back(ans);
        for(int j = 1; j < i; j++)
        {
            ans = ans*(i-j);
            ans = ans/j;
            /* cout << ans << " "; */
            a[i].push_back(ans);
        }
        /* cout << endl; */
        ans = 1;
    }
    for(auto i : a)
    {
        for(auto j : i)
            cout << j << " ";
        cout << endl;
    }
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


