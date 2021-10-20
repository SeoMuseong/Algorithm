#include <iostream>
#include <vector>
using namespace std;



struct man
{
	int w;
	int h;
};

void solve(vector<man> v, vector<int> vc)
{
	int i, j;
	for (i = 0; i < v.size(); i++)
	{
		for (j = 0; j < v.size(); j++)
		{
			if (i == j)
				continue;

			if (v[i].w < v[j].w && v[i].h < v[j].h)
				vc[i]++;
		}
	}
	for (i = 0; i < vc.size(); i++)
		cout << vc[i] << " ";
}

int main()
{
	int N, i;
	cin >> N;
	vector<man> v(N);
	vector<int> vc(N, 1);
	for (i = 0; i < N; i++)
	{
		cin >> v[i].w >> v[i].h;
	}
	
	solve(v, vc);

	return 0;
}