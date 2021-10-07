#include <iostream>
#include <string.h>
using namespace std;

char str[101];

int main()
{
	int cnt = 0, len;

	cin >> str;
	len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'c' && (i + 1 < len && (str[i + 1] == '=' || str[i + 1] == '-')))
		{
			i++;
		}
		else if (str[i] == 'd')
		{
			if (i + 1 < len && str[i + 1] == '-')
			{
				i++;
			}
			else if ((i + 1 < len && str[i + 1] == 'z') && (i + 2 < len && str[i + 2] == '='))
			{
				i += 2;
			}
		}
		else if (str[i] == 'l' && (i + 1 < len && str[i + 1] == 'j'))
			i++;
		else if (str[i] == 'n' && (i + 1 < len && str[i + 1] == 'j'))
			i++;
		else if (str[i] == 's' && (i + 1 < len && str[i + 1] == '='))
			i++;
		else if (str[i] == 'z' && (i + 1 < len && str[i + 1] == '='))
			i++;
		cnt++;
	}
	cout << cnt << endl;

	return 0;
}