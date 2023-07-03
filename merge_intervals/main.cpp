#include <bits/stdc++.h>
#include <climits>
#include <unordered_map>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

#define pb push_back;
#define f first;
#define s second;
#define endl "\n";

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a -= b;
}

//For Calculating nCr
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

void messi()
{
    int n;
    cin >> n;
    vector<vector<int>>a(n, vector<int>(2,0));
    for(int i = 0; i < 2; i++)
        for(int j = 0 ; j < n; j++)
            cin >> a[i][j];
    sort(a.begin(), a.end());
    vector<vector<int>>res;
    for(int i = 0; i < n; i++)
    {
        if(res.empty() || a[i][0] > res.back()[1])
            res.push_back(a[i]);
        else
            res.back()[1] = max(res.back()[1], a[i][1]);
    }
    print_2d_array(res);
}

int main()
{
    /* freopen("input.txt", "r", stdin); */
    /* freopen("output.txt", "w", stdout); */

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    /* int t = 1; */
    /* for(cin >> t; t--;) */
    /* { */
    /*     messi(); */
    /* } */

    messi();

    return 0;
}

