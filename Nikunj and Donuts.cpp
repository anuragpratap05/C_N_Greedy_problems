# C_N_Greedy_problems
#include<bits/stdc++.h>
using namespace std;



int main()
{

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());

	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += a[i] * pow(2,i);
	}
	cout << ans;
}
