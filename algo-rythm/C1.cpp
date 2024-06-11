#include <iostream>
#include <string>
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	int arr[m];
	int all = 0;
	int sp = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++)
	{
		int x = 0;
		for (int j = 0; j < m; j++)
		{
			if (i == arr[j])
			{
				x = 1;
				all++;
				break ;
			}
		}
		if (x == 0)
		{
			sp++;
			cout << i << " ";
		}
		if (all == n)
			cout << "All students are present" << endl;
	}
}

int main()
{
	solve();
}