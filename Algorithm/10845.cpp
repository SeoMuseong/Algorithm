#include <iostream>
#include <queue>
#include <map>
using namespace std;
enum CMD { PUSH =1, POP, SIZE, EMPTY, FRONT, BACK};

map<string, int> cmd = { {"push", CMD::PUSH}, { "pop", CMD::POP}, 
	{"size", CMD::SIZE}, {"empty", CMD::EMPTY}, {"front", CMD::FRONT}, 
	{"back", CMD::BACK}};

queue<int> q;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc, num;
	string str;
	cin >> tc;
	while (tc--)
	{
		cin >> str;
		switch (cmd[str])
		{
		case PUSH:
			cin >> num;
			q.push(num);
			break;
		case POP:
			if (q.empty())
				cout << "-1" << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
			break;
		case SIZE:
			cout << q.size() << '\n';
			break;
		case EMPTY:
			if(q.empty()) cout << "1" << '\n';
			else  cout << "0" << '\n';
			break;
		case FRONT:
			if (q.empty()) cout << "-1" << '\n';
			else  cout << q.front() << '\n';
			break;
		case BACK:
			if (q.empty()) cout << "-1" << '\n';
			else  cout << q.back() << '\n';
			break;
		}
	}

	return 0;
}
