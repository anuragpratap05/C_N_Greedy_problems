# C_N_Greedy_problems
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int s, d;
	cin >> s >> d;
	int a[d] ;
	int temp = s - 1;
	for (int i = 0; i < d - 1; i++)
	{
		if (temp >= 9)
		{
			a[i] = 9;
			temp = temp - 9;
		}
		else
		{
			a[i] = temp;
			temp = temp - temp;
		}
	}



	int sum1 = 0;
	for (int i = 0; i < d - 1; ++i)
	{
		/* code */sum1 += a[i];
	}
	//cout << endl;
	//cout << sum1;
	int ans = s - 1 - (sum1) + 1;
	cout << ans;
	for (int i = d - 2 ; i >= 0; i--)
	{
		/* code */cout << a[i];
	}



}


