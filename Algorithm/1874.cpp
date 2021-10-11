#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
	int N, i, num = 1, input;
	cin >> N;
	vector<char> ans;
	stack<int> st;
	for (i = 0; i < N; i++)
	{
		cin >> input;
		while (num <= input)
		{
			st.push(num);
			ans.push_back('+');
			num++;
		}
		if (st.top() == input)
		{
			st.pop();
			ans.push_back('-');
		}
		else
		{
			cout << "NO" << '\n';
			return 0;
		}
	}

	for (auto n: ans)
		cout << n << '\n';

	return 0;
}