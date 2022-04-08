// bubble sort acceding to descending
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

    int temp;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << num[i];
    }

    return 0;
}