#include <iostream>
#include <string.h>
using namespace std;

int Alpa[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
char str[16];
int main()
{
	int ans = 0;
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		ans += Alpa[str[i] - 'A'];
	}
	cout << ans << endl;
	return 0;
}