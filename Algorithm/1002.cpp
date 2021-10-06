#include <iostream>
#include <math.h>
using namespace std;

double xx1, yy1, r1, x2, y2, r2;

int solve()
{
	cin >> xx1 >> yy1 >> r1 >> x2 >> y2 >> r2;

	double dist = sqrt((x2 - xx1) * (x2 - xx1) + (y2 - yy1) * (y2 - yy1));

	int hap = r1 + r2;
	int sub = (r1 > r2) ? r1 - r2 : r2 - r1;

	if (sub < dist && dist < hap)
		return 2;
	else if ((dist == hap) || (dist == sub && dist != 0))
		return 1;
	else if (dist < sub || dist > hap)
		return 0;
	else if (dist == 0)
	{
		if (r1 == r2) return -1;
		else return 0;
	}
}

int main()
{
	int tc;

	cin >> tc;

	while (tc--)
	{
		cout << solve() << endl;
	}
	return 0;
}