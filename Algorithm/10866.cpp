#include <iostream>
#include <deque>
#include <map>
using namespace std;
enum CMD { PUSH_FRONT = 1, PUSH_BACK, POP_FRONT, POP_BACK, 
	SIZE, EMPTY, FRONT, BACK };

map<string, int> cmd = { 
	{"push_front", CMD::PUSH_FRONT}, {"push_back", CMD::PUSH_BACK}, 
	{"pop_front", CMD::POP_FRONT}, {"pop_back", CMD::POP_BACK}, 
	{"size", CMD::SIZE}, {"empty", CMD::EMPTY}, 
	{"front", CMD::FRONT}, {"back", CMD::BACK} };

deque<int> q;

void push_front() {
	int num;
	cin >> num;
	q.push_front(num);
}
void push_back() {
	int num;
	cin >> num;
	q.push_back(num);
}
void pop_front() {
	if (q.empty())
		cout << "-1" << '\n';
	else
	{
		cout << q.front() << '\n';
		q.pop_front();
	}
}

void pop_back() {
	if (q.empty())
		cout << "-1" << '\n';
	else
	{
		cout << q.back() << '\n';
		q.pop_back();
	}
}
void size() {
	cout << q.size() << '\n';
}
void empty() {
	if(q.empty())
		cout << "1" << '\n';
	else
		cout << "0" << '\n';
}
void front() {
	if (q.empty())
		cout << "-1" << '\n';
	else
	{
		cout << q.front() << '\n';
	}
}
void back() {
	if (q.empty())
		cout << "-1" << '\n';
	else
	{
		cout << q.back() << '\n';
	}
}

int main()
{
	void(*fp[])() = { nullptr, 
		push_front, push_back, pop_front, pop_back, size, empty, front, back
	};
	int tc, num;
	string str;
	cin >> tc;
	while (tc--)
	{
		cin >> str;
		fp[cmd[str]]();
	}
	return 0;
}