#include<bits/stdc++.h>
int removeDuplicates(vector<int> &a, int n) {
	// Write your code here.
	int count = 1;
	for(int i = 1; i < n; i++)
	{
		if(a[i] != a[i-1])
			count++;
	}
	return count;
}
