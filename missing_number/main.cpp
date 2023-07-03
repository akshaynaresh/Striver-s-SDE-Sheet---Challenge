/*
 *
 * Author : Akshay Dwivedi
 * Copyright 2023
 *
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

#define pb push_back;
#define fi first;
#define se second;
#define endl "\n";

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a -= b;
}

ll find_nCr(int n, int r)
{
    ll res = 1;
    for(int i = 0; i < r; i++)
    {
        res *= (n-i);
        res /= (i+1);
    }           
    return res;
}

void print_2d_array(vector<vector<int>>a)
{
    for(auto i : a)
    {
        for(auto j : i)
            cout << j << " ";
        cout << endl;
    }
}

void transpose_matrix(vector<vector<int>>&a)
{
    int n = a.size(), m = a[0].size();
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < m; j++)
            swap(a[i][j], a[j][i]);
}

void pi_value(int n)
{
  cout << setprecision(n+1) << 2*acos(0.0);
}

void kadane()
{
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto i = 0; i < n; i++)
    cin >> v[i];
  int sum = 0;
  int maxi = INT_MIN;
  for(auto i : v)
  {
    sum += i;
    maxi = max(maxi, sum);
    if(sum < 0)
      sum = 0;
  }
  cout << maxi;
}

int power(int a, int b)
{
  if(b == 0)
  return 1;
  else if(b == 1)
  return a;
  else
  {
    int temp = pow(a,b/2);
    int ans = temp*temp;
    if(b%2 == 1)
    ans *= a;
    return ans;
  }
}

int string_to_numeric(string s)
{
  int n = s.size();
  int j = 1;
  int sum = 0;
  for(int i = n-1; i >= 0; i--)
  {
    sum += (s[i] - 48)*j;
    j *= 10;
  }
  return sum;
}

ll array_to_no(vector<ll>a)
{
    int n = a.size(), sum = 0, d = 1;
    for(int i = n-1; i >= 0; i--)
    {
        sum += a[i]*d;
        d *= 10;
    }
    return sum;
}

vector<ll> no_to_array(ll n)
{
    vector<ll>a;
    while(n != 0)
    {
        a.push_back(n%10);
        n /= 10;
    }
    return a;
}

void messi()
{
    int n;
    cin >> n;
    vector<int>a(n);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }
    int sum = (n*(n+1))/2;
    unordered_map<int,int>h;
    for(int i = 0; i < n; i++)
        h[a[i]]++;
    int res = 0;
    for(auto i : h)
    {
        if(i.second == 2)
            res = i.first;
    }
    ans -= res;
    int mis = sum - ans;
    pair<int, int>p;
    p.first = mis, p.second = res;
    cout << p.first << " " << p.second << endl;
}

int main()
{
    /* #ifndef ONLINE_JUDGE */ 
    /* freopen("input.txt","r",stdin); */  
    /* freopen("output.txt","w",stdout); */   
    /* #endif */ 

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    /* int t = 1; */
    /* for( cin >> t; t--;) */
    /* { */
    /*      messi(); */
    /* } */
    messi();

    return 0;
}


