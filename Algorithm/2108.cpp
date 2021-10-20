#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;
bool cmp(const pair<int, int>& a, const pair<int, int>& b) 
{
	if (a.second == b.second) { 
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main()
{
	int N, i, sum = 0, avg, num = 0;
	cin >> N;
	vector<int> arr(N);
	map<int, int> ncnt;
	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (ncnt.find(arr[i]) == ncnt.end())
			ncnt.insert({ arr[i],1 });
		else
			ncnt[arr[i]]++;
		sum += arr[i];
	}

	avg = round(sum / (double)N);
	cout << avg << '\n';

	sort(arr.begin(), arr.end());

	cout << arr[N / 2] << '\n';

	vector<pair<int, int>> vec(ncnt.begin(), ncnt.end());

	sort(vec.begin(), vec.end(), cmp);

	if (vec.size() > 1 && vec[0].second == vec[1].second)
		cout << vec[1].first << '\n';
	else
		cout << vec[0].first << '\n';

	cout << arr[N - 1] - arr[0] << '\n';
	return 0;
}