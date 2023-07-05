#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &a, int n, int k)
{
	// Write your code here.
	sort(a.begin(), a.end());
        return {a[k-1], a[n-k]};
}
