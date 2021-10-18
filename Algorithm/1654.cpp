#include <iostream>
#include <vector>
using namespace std;
int K, N;
long long int maxLen;
vector<int> arr;

int result(int len)
{
	int i, res = 0;
	for (i = 0; i < K; i++)
	{
		res += (arr[i] / len);
	}
	return res;
}

void solve()
{
	long long row = 1, high = maxLen;
	long long mid, ans = 1;
	while (row <= high)
	{
		mid = (row + high) / 2;
		if (result(mid) >= N)
		{
			if (ans < mid)
				ans = mid;
			row = mid + 1;
		}
		else
			high = mid - 1;
	}

	cout << ans << '\n';
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int i, num;
	cin >> K >> N;
	maxLen = 0;
	for (i = 0; i < K; i++)
	{
		cin >> num;
		if (maxLen < num) maxLen = num;
		arr.push_back(num);
	}

	solve();

	return 0;
}