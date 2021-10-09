#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, max, ans;
	cin >> N;
	vector<vector<int>> arr(N+1, vector<int>(2));
	vector<int> d(N + 1);
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}
	d[0] = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i + arr[i][0]-1 <= N)
			d[i] = arr[i][1];
		else
			d[i] = 0;

		max = 0;
		for (int j = i - 1; j >= 1; j--)
		{
			if (j + arr[j][0] <= i)
			{
				if (max < d[j])
					max = d[j];
			}
		}
		d[i] += max;
	}
	ans = d[1];
	for (int i = 2; i <= N; i++)
	{
		if (ans < d[i])
			ans = d[i];
	}
	cout << ans << endl;
	return 0;
}
