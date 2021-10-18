#include <iostream>
#include <fstream>
#include <string>
#include <stack>
using namespace std;

bool solve(string str)
{
	stack<char> st;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '(')
			st.push('(');
		else if (str[i] == '[')
			st.push('[');
		else if (str[i] == ')')
		{
			if (st.size() > 0 && st.top() == '(')
				st.pop();
			else
				return false;
		}
		else if (str[i] == ']')
		{
			if (st.size() > 0 && st.top() == '[')
				st.pop();
			else
				return false;
		}
	}
	if (st.empty())
		return true;
	return false;
}

int main()
{
	while (1)
	{
		string str;
		getline(cin, str);
		if (str.size() == 1 && str[0] == '.')
			break;

		if(solve(str))
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';

	}
	return 0;
}
