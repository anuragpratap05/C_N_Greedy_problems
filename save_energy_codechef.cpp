# C_N_Greedy_problems
#include<bits/stdc++.h>
using namespace std;


int main()
{

	long n;
	cin >> n;
	long a[n];
	for (long i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	long i = 0;
	long res = 0;
	while (i < n - 1)
	{
		long j = i + 1;
		while (j < n - 1)
		{
			if ((abs(a[i]) > abs(a[j])) or ((abs(a[i]) == abs(a[j]) and (a[i] > 0))))
			{
				break;
			}
			else
			{
				j++;
			}
		}
		//(j-i)*A[i] + (j2 - i2)*A[i]2
		res += (j - i) * a[i] + (j * j - i * i) * a[i] * a[i];
		i = j;
	}
	cout << res;
	return 0;
}

