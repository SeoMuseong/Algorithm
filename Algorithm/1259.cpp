#include <iostream>
#include <string.h>
using namespace std;
string str;
int len;
void solve()
{
	int i, j;
	for (i = 0, j = len - 1; i <= j; i++, j--)
	{
		if (str[i] != str[j])
		{
			cout << "no" << '\n';
			return;
		}
	}
	cout << "yes" << '\n';
}
int main()
{
	while (cin >> str)
	{
		if (str == "0")
			break;
		len = str.length();
		solve();
	}
}
