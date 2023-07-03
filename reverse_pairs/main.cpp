#include <bits/stdc++.h>
#include <climits>
#include <unordered_map>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

#define pb push_back
#define f first
#define s second
#define endl "\n"

void print_array(vector<int>a)
{
    for(auto i : a)
        cout << i << " ";
    cout << endl;
}

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

void merge(vector<int>&a, int low, int mid, int high)
{
    vector<int>res;
    int left = low, right = mid+1;
    while(left <= mid && right <= high)
    {
        if(a[left] <= a[right])
        {
            res.push_back(a[left]);
            left++;
        }
        else {
            res.push_back(a[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        res.push_back(a[left]);
        left++;
    }
    while(right <= high)
    {
        res.push_back(a[right]);
        right++;
    }
    for(int i = low; i <= high; i++)
        a[i] = res[i-low];
}

int countPairs(vector<int>&a, int low, int mid, int high)
{
    int cnt = 0, right = mid+1;
    for(int i = low; i <= mid; i++)
    {
        while(right <= high && a[i] > 2*a[right])
        {
            right++;
        }
        cnt += (right - (mid+1));
    }
    return cnt;
}


int merge_sort(vector<int>&a, int low, int high)
{
    int cnt = 0;
    if(low < high)
    {
        int mid = (low+high)/2;
        cnt += merge_sort(a, low, mid);
        cnt += merge_sort(a, mid+1, high);
        cnt += countPairs(a, low, mid, high);
        merge(a, low, mid, high);
    }
    return cnt;
}

void messi()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << merge_sort(a, 0, n-1) << endl;
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

