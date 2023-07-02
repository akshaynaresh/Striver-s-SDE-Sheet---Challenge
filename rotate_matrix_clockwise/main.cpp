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

void messi()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>>a(n, vector<int>(m,0));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    int row = 0, col = 0;
    int maxRow = n-1, maxCol = m-1;
    while(row < maxRow && col < maxCol)
    {
        int prev = a[row+1][col];
        for(int i = col; i <= maxCol; i++)
        {
            int cur = a[row][i];
            a[row][i] = prev;
            prev = cur;
        }
        row++;
        for(int i = row; i <= maxRow; i++)
        {
            int cur = a[i][maxCol];
            a[i][maxCol] = prev;
            prev = cur;
        }
        maxCol--;
        if(row < maxRow+1)
        {
            for(int i = maxCol; i >= col; i--)
            {
                int cur = a[maxRow][i];
                a[maxRow][i] = prev;
                prev = cur;
            }
            maxRow--;
        }
        if(col < maxCol+1)
        {
            for(int i = maxRow; i >= row; i--)
            {
                int cur = a[i][col];
                a[i][col] = prev;
                prev = cur;
            }
            col++;
        }
    }
    cout << "Output : " << endl;
    for(auto i : a)
    {
        for(auto j : i)
            cout << j << " ";
        cout << endl;
    }
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

