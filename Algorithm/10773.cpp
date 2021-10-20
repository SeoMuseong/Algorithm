#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, i, sum = 0, num;
	cin >> N;
	vector<int> vc;
	for (i = 0; i < N; i++)
	{
		cin >> num;
		if (num)
			vc.push_back(num);
		else
			vc.pop_back();
	}
	for (i = 0; i < vc.size(); i++)
	{
		sum += vc[i];
	}

	cout << sum << '\n';
	return 0;
}