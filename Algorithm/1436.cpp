#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{
	int N, cnt = 0, num = 666;
	cin >> N; 

	while(1)
	{
		if (to_string(num).find("666") != string::npos)
			cnt++; 
		if (N == cnt) 
		{ 
			cout << num << '\n';
			break; 
		} 
		num++;
	} 
	return 0; 
}
