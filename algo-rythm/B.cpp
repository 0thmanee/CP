#include <iostream>
#include <string>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0')
		{
			int j = i;
			while (j < n && s[j] != '1')
				j++;
			if (j - i >= k)
				res++;
		}
	}
	cout << res;
}

int main()
{
	solve();
}