# C_N_Greedy_problems
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	int diff1 = abs(a[0] - a[n - 1]);
	int small = a[0] + k;
	int big = a[n - 1] - k;
	if (small > big)
	{
		swap(small, big);
	}
	for (int i = 0; i <= n - 2; ++i)
	{
		int subt = a[i] - k;
		int add = a[i] + k;
		if (subt >= small or add <= big)
		{
			continue;
		}
		else
		{
			if (big - subt <= add - small)
			{
				small = subt;
			}
			else
			{
				add = big;
			}
		}
	}

	int diff2 = big - small;
	int ans = min(diff2, diff1);
	cout << ans;

}


