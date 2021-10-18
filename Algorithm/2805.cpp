#include <iostream>
#include <vector>
using namespace std;
int M, N;
long long int maxLen;
vector<int> arr;

long long int result(int H)
{
	int i;
	long long int res = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] > H)
			res += (arr[i] - H);
	}
	return res;
}
void solve()
{
	long long row = 0, high = maxLen;
	long long mid, ans = 0;
	while (row <= high)
	{
		mid = (row + high) / 2;
		if (result(mid) >= M)
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
	cin >> N >> M;
	maxLen = 0;
	for (i = 0; i < N; i++)
	{
		cin >> num;
		if (maxLen < num) maxLen = num;
		arr.push_back(num);
	}

	solve();

	return 0;
}