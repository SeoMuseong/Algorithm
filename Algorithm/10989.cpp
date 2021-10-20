#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, i, j, num;
	cin >> N;
	vector<int> vc(10001, 0);
	for (i = 1; i <= N; i++)
	{
		cin >> num;
		vc[num]++;
	}

	for (i = 1; i < 10001; i++)
	{
		for (j = 1; j <= vc[i]; j++)
			cout << i << '\n';
	}
	return 0;
}