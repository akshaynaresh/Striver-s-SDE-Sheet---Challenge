/*
 *
 * Author : Akshay Dwivedi
 *
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
   int index = -1;
    for(int i = n-2; i >= 0; i--)
    {
        if(a[i] < a[i+1])
        {
            index = i;
            break;
        }
    }
    if(index == -1)
    {
        reverse(a.begin(), a.end());
        for(auto i : a)
            cout << i << " ";
        cout << endl;
        return;
    }    
    for(int i = n-1; i > index; i--)
    {
        if(a[i] > a[index])
        {
            swap(a[i], a[index]);
            break;
        }    
    }
    reverse(a.begin()+index+1, a.end());
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


