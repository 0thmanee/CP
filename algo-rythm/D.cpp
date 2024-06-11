#include <iostream>
#include <string>
using namespace std;

int abs(int z)
{
	if (z > 0)
		return z;
	return -z;
}

int no_obs(string arr[], int i, int j, int pi, int pj, int n, int m)
{
	int x = 0;
	for (int k = pi; k < n; k++)
	{
		for (int l = pj; l < m; l++)
		{
			if ()
		}
	}
	if (x == 0)
		return (1);
	return (0);
}

void solve()
{
	int m, n;
	cin >> n >> m;
	string arr[n];
	int pj, pi;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 'P')
			{
				(pi = i, pj = j);
				break ;
			}
		}
	}
	int I = pi, J = pj, steps = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (no_obs(arr, i, j, pi, pj, n, m) && arr[i][j] == 'M')
			{
				if (abs(i - pi) + abs(j - pj) > steps)
				{
					I = i;
					J = j;
					steps = abs(i - pi) + abs(j - pj);
				}
				else if (abs(i - pi) + abs(j - pj) == steps && (i > I || (i == I && j > J)))
				{
					I = i;
					J = j;
				}
			}
		}
	}
	if (I != pi && J != pj)
		cout << I + 1 << " " << J + 1;
	else
		cout << "Nasser should pray at home";
}

int main()
{
	solve();
}