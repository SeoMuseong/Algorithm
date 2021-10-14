#include <iostream>
#include <queue>
using namespace std;

queue<int> num;
queue<int> ans;

int main()
{
	int K, N, i;
	cin >> K >> N;
	for (i = 1; i <= K; i++)
		num.push(i);

	i = 1;
	while (num.size())
	{
		if (i % N == 0)
			ans.push(num.front());
		else
			num.push(num.front());
		num.pop();
		i++;
	}
	cout << "<";
	while (ans.size() > 1)
	{
		cout << ans.front() << ", ";
		ans.pop();
	}
	cout << ans.front() << ">\n";
	return 0;
}