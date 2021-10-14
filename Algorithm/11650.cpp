#include <iostream>
#include <set>
using namespace std;

set<pair<int, int>> s;

int main()
{
	int N, n1, n2;
	cin >> N;
	while (N--)
	{
		cin >> n1 >> n2;
		s.insert({ n1, n2 });
	}
	set<pair<int, int>>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++) {
		cout << (*iter).first << " " << (*iter).second << '\n';
	}

	return 0;
}