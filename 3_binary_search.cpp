// binary search
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int num[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	int t;
	cin >> t;

	int l = 0, u = n - 1;
	while (l <= u)
	{
		int m = (l + u) / 2;
		if (num[m] == t)
		{
			cout << m;
			break;
		}
		else if (num[m] < t)
		{
			l = m + 1;
		}
		else
		{
			u = m - 1;
		}
	}

	return 0;
}