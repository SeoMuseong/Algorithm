#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
	int N, M, i, j, k, sum, max;
	cin >> N >> M;
	
	vector<int> arr(N);

	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	max = 0;
	for (i = 0; i < N-2; i++)
	{
		for (j = i + 1; j < N-1; j++)
		{
			for (k = j + 1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum == M)
				{
					cout << M << endl;
					return 0;
				}
				else if (sum < M && sum > max)
					max = sum;
			}
		}
	}

	cout << max << endl;

	return 0;
}