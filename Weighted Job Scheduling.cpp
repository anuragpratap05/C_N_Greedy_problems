# C_N_Greedy_problems
// C++ program to store data triplet in a vector
// using user defined structure.
#include<bits/stdc++.h>
using namespace std;
struct Test
{
	int s, e, p;
};

bool compare(Test a, Test b)
{
	return a.e < b.e;
}

int main()
{

	vector<Test> v;

	int n;
	cin >> n;
	int start, end, profit;
	for (int i = 0; i < n; ++i)
	{
		cin >> start >> end >> profit;
		v.push_back({start, end, profit});

	}

	sort(v.begin(), v.end(), compare);

	int dp[n];

	dp[0] = v[0].p;

	for (int i = 1; i < n; i++)
	{
		int incl = v[i].p;
		int si = 0;
		int ei = i - 1;
		int l_non_confl = -1;

		while (si <= ei)
		{
			int mid = (si + ei) / 2;
			if (v[mid].e <= v[i].s)
			{

				if (v[mid + 1].e <= v[i].s)
				{
					si = mid + 1;
				}
				else
				{
					l_non_confl = mid;
					break;
				}
			}
			else ei = mid - 1;
		}
		if (l_non_confl != -1)
		{
			incl += dp[l_non_confl];
		}
		dp[i] = max(dp[i - 1], incl);

	}



	// Creating a vector of Test


	// Inserting elements into vector. First
	// value is assigned to x, second to y
	// and third to z.




	/*int s = v.size();
	for (int i = 0; i < s; i++)
	{
		// Accessing structure members using their
		// names.
		cout << v[i].s << ", " << v[i].e
		     << ", " << v[i].p << endl;
	}

	cout << endl;*/

	/*for (int i = 0; i < n; i++)
	{
		cout << dp[i] << " ";
	}*/
	cout << dp[n - 1] << endl;
	return 0;
}


