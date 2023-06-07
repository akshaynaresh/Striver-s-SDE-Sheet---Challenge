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
    int n, m;
    cin >> n >> m;
    vector<vector<int>>a(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    /* for(int i = 0; i < n; i++) */
    /* { */
    /*     for(int j = 0; j < m; j++) */
    /*     { */
    /*         if(a[i][j] == 0) */
    /*         { */
    /*             for(int k = 0; k < m; k++) */
    /*                 if(a[i][k] != 0) */
    /*                     a[i][k] = -1; */
    /*             for(int l = 0; l < n; l++) */
    /*                 if(a[l][j] != 0) */
    /*                     a[l][j] = -1; */
    /*         } */
    /*     } */
    /* } */
    /* for(int i = 0; i < n; i++) */
    /*     for(int j = 0; j < m; j++) */
    /*         if(a[i][j] == -1) */
    /*             a[i][j] = 0; */

    int rowZero = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == 0)
            {
                if(i == 0)
                    rowZero = 0;
                else 
                    a[i][0] = 0;
                a[0][j] = 0;
            }
        }
    }
    for(int i =1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            if(a[i][j] != 0)
                if(a[0][j] == 0 || a[i][0] == 0)
                    a[i][j] = 0;
        }
    }
    if(a[0][0] == 0)
        for(int i = 0; i < n; i++)
            a[i][0] = 0;
    if(rowZero == 0)
        for(int i = 0; i < m; i++)
                a[0][i] = 0;
    cout << "output : " << endl;
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
    /*     messi(); */
    /* } */
    messi();
}


