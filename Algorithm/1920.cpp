#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, tc, num;
	cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());
	cin >> tc;
	while (tc--)
	{
		cin >> num;
		auto it = find(arr.begin(), arr.end(), num);
		if (it == arr.end())
			cout << "0" << endl;
		else
			cout << "1" << endl;
	}
}
