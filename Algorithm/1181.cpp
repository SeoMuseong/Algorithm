#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N;
string* str = nullptr;

bool comp(string s1, string s2) {
	if (s1.length() < s2.length())
		return true;
	else if(s1.length() == s2.length())
		return s1 < s2;
	return false;
}

int main()
{
	cin >> N;
	str = new string[N];
	string ans2;
	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}
	sort(str, str + N, comp);
	for (int i = 0; i < N; i++)
	{
		if (ans2 != str[i])
		{
			ans2 = str[i];
			cout << ans2 << '\n';
		}
	}
	delete[] str;
	return 0;
}