#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
	vector<int> arr(26, 0);
	vector<char> ans;
	string str;
	int i, len, max;
	
	cin >> str;
	len = str.length();

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			arr[str[i] - 'a']++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			arr[str[i] - 'A']++;
	}

	max = arr[0];
	for (i = 1; i < arr.size(); i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	for (i = 0; i < arr.size(); i++)
	{
		if (max == arr[i])
			ans.push_back('A' + i);
	}
	if (ans.size() > 1)
		cout << "?" << endl;
	else
		cout << ans[0] << endl;

	return 0;

}
