#include <iostream>
using namespace std;

int arr[1001];
int d[1001];
int num;

int solve()
{
	int i, j, max;
	
	d[1] = 1;

	for (i = 2; i <= num; i++)
	{
		d[i] = 1;
		max = 1;
		for (j = 1; j <= i; j++)
		{
			if (j < i && arr[j] < arr[i])
			{
				d[i] = d[j] + 1;
				if (max < d[i])
					max = d[i];
			}
		}
		d[i] = max;
	}

	max = d[1];
	for (i = 2; i <= num; i++)
	{
		if (max < d[i])
			max = d[i];
	}
	return max;
}

int main()
{
	cin >> num;

	for (int i = 1; i <= num; i++)
		cin >> arr[i];

	cout << solve() << endl;
	
	return 0;
}
