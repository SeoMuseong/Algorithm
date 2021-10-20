#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int i, j, h, min = 256, max = 0;
	int N, M, B, PB = 0, MB = 0, ansH, ansT, tmpT;
	cin >> N >> M >> B;

	vector<vector<int>> arr(N, vector<int>(M));

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cin >> arr[i][j];
			if (min > arr[i][j])
				min = arr[i][j];
			if(max < arr[i][j])
				max = arr[i][j];
		}
	}
	ansH = 0;
	ansT = 128000000;

	for (h = min; h <= max; h++)
	{
		PB = 0, MB = 0;
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				if (arr[i][j] >= h)
 					PB += (arr[i][j] - h);
				else
					MB += (h- arr[i][j]);
			}
		}

		if (MB <= B+PB)
		{
			tmpT = PB * 2 + MB;
			if (ansT >= tmpT)
			{
				ansT = tmpT;
				ansH = h;
			}
		}
	}
	cout << ansT << " " << ansH << endl;
	return 0;
}
