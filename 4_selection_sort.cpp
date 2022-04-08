// selection sort acceding to descending
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i];
    }

    return 0;
}