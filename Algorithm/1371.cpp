#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
	vector<int> cnt(26, 0);
	string str;
	while (cin >> str)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				cnt[str[i] - 'a']++;
		}
	}
	int max = 0;
	for (int i = 0; i < cnt.size(); i++)
	{
		if (max < cnt[i])
			max = cnt[i];
	}
	for (int i = 0; i < cnt.size(); i++)
	{
		if (max == cnt[i])
			cout << (char)('a' + i);
	}
	return 0;
}
