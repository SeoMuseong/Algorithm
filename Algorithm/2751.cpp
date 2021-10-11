#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N, i;
	cin >> N;
	vector<int> arr(N);

	for (i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());
	for (i = 0; i < N; i++)
		cout << arr[i] << '\n';

	return 0;
}