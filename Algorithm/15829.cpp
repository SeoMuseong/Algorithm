#include <iostream>
#include <string>
using namespace std;

#define M 1234567891

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, i;
	long long int ans = 0;
	long long int r = 1;
	string str;
	cin >> N;
	cin >> str;

	for (i = 0; i < str.length(); i++)
	{
		ans = (ans + ((str[i] - 'a' + 1) * r) % M) % M;
		r = (r % M * 31 % M) % M;
	}
	cout << ans << '\n';
	return 0;
}