// linear search
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
	for (int i = 0; i < n; i++)
	{
		if (num[i] == t)
		{
			cout << i;
			break;
		}
	}

	return 0;
}