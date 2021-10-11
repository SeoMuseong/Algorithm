#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i;
	vector<int> arr(8);
	bool asc = true, desc = true;

	for (i = 0; i < arr.size(); i++)
		cin >> arr[i];

	for (i = 1; i < arr.size(); i++)
	{
		if ( arr[i - 1] > arr[i])
			asc = false;
		else if (arr[i - 1] < arr[i])
			desc = false;
	}
	if (asc)
		cout << "ascending" << endl;
	else if (desc)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;

	return 0;
}