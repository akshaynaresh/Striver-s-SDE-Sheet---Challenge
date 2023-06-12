#include <bits/stdc++.h>

int findMajorityElement(int a[], int n) {
	// Write your code here.
	int ans = 0, c = 0;
	unordered_map<int,int>h;
	for(int i = 0; i < n; i++)
	{
		h[a[i]]++;
	}
	for(auto i : h)
	{
		if(i.second > n/2)
		{
			ans = i.first;
			c++;
			break;
		}
	}
	if(c > 0)
		return ans;
	else if(c == 0)
		return -1;
}
