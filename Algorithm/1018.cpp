#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int len;
int N, M;
string* str = nullptr;
char chess1[][9] =
{ "WBWBWBWB", "BWBWBWBW",
	"WBWBWBWB", "BWBWBWBW",
	"WBWBWBWB", "BWBWBWBW",
	"WBWBWBWB", "BWBWBWBW", };
char chess2[][9] =
{ "BWBWBWBW", "WBWBWBWB",
	"BWBWBWBW",	"WBWBWBWB",
	"BWBWBWBW",	"WBWBWBWB",
	"BWBWBWBW",	"WBWBWBWB", };

int solve1(int row, int col)
{
	int res = 0;
	int n, m, i, j;
	for (i = row, n = 0; n < 8; i++, n++)
	{
		for (j = col, m = 0; m < 8; j++, m++)
		{
			if (chess1[n][m] != str[i][j])
				res++;
		}
	}
	return res;
}
int solve2(int row, int col)
{
	int res = 0;
	int n, m, i, j;
	for (i = row, n = 0; n < 8; i++, n++)
	{
		for (j = col, m = 0; m < 8; j++, m++)
		{
			if (chess2[n][m] != str[i][j])
				res++;
		}
	}
	return res;
}

int main()
{
	int sol1, sol2, ans = 64;
	cin >> N >> M;
	str = new string[N];
	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
		{
			sol1 = solve1(i, j);
			if (ans > sol1)
				ans = sol1;
			sol2 = solve2(i, j);
			if (ans > sol2)
				ans = sol2;
		}
	}
	cout << ans << '\n';
	return 0;
}