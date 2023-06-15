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

int cnt = 0;

void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while( left <= mid && right <= high)
    {
        if(a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else {
            temp.push_back(a[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }
    for(int i = low; i <= high; i++)
        a[i] = temp[i-low];
}

void mergesort(vector<int>&a, int low, int high)
{
    if(low < high)
    {
        int mid = (low + high)/2;
        mergesort(a,  low, mid);
        mergesort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

void messi()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int low = 0, high = n-1;
    mergesort(a, low, high);
    /* for(auto i : a) */
    /*     cout << i << " "; */
    /* cout << endl; */
    cout << cnt << endl;

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


