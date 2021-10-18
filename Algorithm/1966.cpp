#include <iostream>
#include <queue>
using namespace std;

int N, M;
queue<pair<int, int>> q;
priority_queue<int> pq;

int solve()
{
	int cnt = 0, index, value;

	while (!q.empty())
	{
		value = q.front().first;
		index = q.front().second;
		q.pop();
		if (pq.top() == value) {
			pq.pop();
			++cnt;
			if (index == M) {
				return cnt;
			}
		}
		else q.push({ value, index });
	}
}

void eraseQ()
{
	while (!q.empty())
		q.pop();
	while (!pq.empty())
		pq.pop();
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int TC, num, i;
	cin >> TC;
	while (TC--)
	{
		cin >> N >> M;

		for (i = 0; i < N; i++)
		{
			cin >> num;

			q.push({ num, i });
			pq.push(num);
		}

		cout << solve() << '\n';
		eraseQ();

	}
	return 0;
}