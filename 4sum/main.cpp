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

void merge_sort(vector<int>&a, int low, int high)
{
    if(low < high)
    {
        int mid = (low+high)/2;
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

void messi()
{
    int n, t;
    cin >> n >> t;
    vector<int>a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>>ans;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++)
    {
        if(i > 0 && a[i] == a[i-1])
            continue;
        for(int j = i+1; j < n; j++)
        {
            if(j > i+1 && a[j] == a[j-1])
                continue;
            int k = j+1, l = n-1;
            while(k < l)
            {
                ll sum = a[i];
                sum += a[j];
                sum += a[k];
                sum += a[l];
                if(sum == t)
                {
                    vector<int>temp = {a[i], a[j], a[k], a[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while( k < l && a[k] == a[k-1])
                        k++;
                    while( k < l && a[l] == a[l+1])
                        l--;
                }
                else if(sum < t)
                    k++;
                else
                    l--;
            }
        }
    }
    print_2d_array(ans);
    if(!ans.empty() && ans[0].size() == 4)
        cout << "YES\n";
    else
        cout << "NO\n";
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

