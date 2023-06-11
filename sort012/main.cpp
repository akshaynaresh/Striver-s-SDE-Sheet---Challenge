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
    int mid = 0, low = 0, high = n-1;
    while(mid <= high)
    {
        if(a[mid] == 0)
        {
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
        else if(a[mid] == 1)
            mid++;
        else if(a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
    for(auto i : a)
        cout << i << " ";
    cout << endl;
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


