#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Node
{
	int	no;
	int age;
	string name;
};

int N;
string* str = nullptr;
vector<Node> arr;
Node input;

bool comp(Node s1, Node s2) {
	if (s1.age < s2.age)
		return true;
	else if (s1.age == s2.age)
		return s1.no < s2.no;
	return false;
}
int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		input.no = i + 1;
		cin >> input.age;
		cin >> input.name;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end(), comp);

	for (int i = 0; i < N; i++)
	{
		cout << arr[i].age << " ";
		cout << arr[i].name << '\n';
	}

	return 0;
}