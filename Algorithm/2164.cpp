#include <iostream>
#include <queue>
using namespace std;
queue<int> q;

int main()
{
	int N, f;
	cin >> N;
	for (int i = 1; i <= N; i++)
		q.push(i);

	while (q.size()!= 1)
	{
		q.pop();
		f = q.front();
		q.pop();
		q.push(f);
	}

	cout << q.front() << endl;

	return 0;
}
