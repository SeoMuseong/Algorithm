#include <iostream>
using namespace std;
int arr[1000001] = { 0 };

int func(int n)
{
	int sum = n;
	while (n)
	{
		sum += (n%10);
		n /= 10;
	}
	return sum;
}

int main()
{
	int i = 1, N;
	int num = 0;
	while (num < 1000000)
	{
		num = func(i);
		if (arr[num] == 0)
			arr[num] = i;
		i++;
	}
	cin >> N;
	cout << arr[N] << endl;
	return 0;
}