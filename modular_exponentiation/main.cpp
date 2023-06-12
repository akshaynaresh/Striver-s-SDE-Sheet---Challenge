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

long long binpow(long long a, long long b,long long n) {
    long long res = 1;
    if(b == 0)
        return 1;
    if(b == 1)
        return a%n;
    long long temp = binpow(a,b/2,n);
    res = temp*temp%n;
    if(b % 2 == 1)
        res *= a;
    return res%n;
}

void messi()
{
    int x, n, m;
    cin >> x >> n >> m;
    cout << binpow(x,n,m) << endl;
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

    int t = 1;
    for( cin >> t; t--;)
    {
         messi();
    }
    /* messi(); */
}


