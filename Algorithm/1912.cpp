#include <iostream>
#include <vector>
using namespace std;	

int main()
{
	int num, max;
	cin >> num;

	vector<int> arr(num + 1);
	vector<int> d(num + 1);

	for (int i = 1; i <= num; i++)
		cin >> arr[i];
	
	max = d[1] = arr[1];
	for (int i = 2; i <= num; i++)
	{
		d[i] = arr[i];
		if (d[i] < d[i - 1] + arr[i])
		{
			d[i] = d[i - 1] + arr[i];
		}

	}

	max = d[1];
	for (int i = 2; i <= num; i++)
	{
		if (max < d[i])
			max = d[i];
	}

	cout << max << endl;

	return 0;
}