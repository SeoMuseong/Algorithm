#include <iostream>
#include <string>
using namespace std;

string str;

void solve()
{
	int cnt = 0;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '(')
			cnt++;
		else if (str[i] == ')')
		{
			cnt--;
			if (cnt < 0)
			{
				cout << "NO" << '\n';
				return;
			}
		}
	}
	if(cnt == 0)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> str;
		solve();
	}
	return 0;
}