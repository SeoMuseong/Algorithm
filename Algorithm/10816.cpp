#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N, num;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cin >> N;

	for (int i = 0; i < N; i++) 
	{
		cin >> num;
		auto upper = upper_bound(v.begin(), v.end(), num);
		auto lower = lower_bound(v.begin(), v.end(), num);

		cout << upper - lower << " ";
	}
	cout << '\n';
	return 0;
}