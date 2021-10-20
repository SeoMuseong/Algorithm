#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point
{
	int x;
	int y;
};

bool cmp(Point p1, Point p2)
{
	if (p1.y < p2.y)
		return true;
	else if(p1.y == p2.y)
		return p1.x < p2.x;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, i, j;

	cin >> N;
	vector<Point> vc(N);
	for (i = 0; i < N; i++)
	{
		cin >> vc[i].x >> vc[i].y;
	}

	sort(vc.begin(), vc.end(), cmp);

	for (i = 0; i < N; i++)
	{
		cout << vc[i].x << " " << vc[i].y << '\n';
	}
	return 0;
}