#include <iostream>
using namespace std;

void solve()
{
	int n;
 	cin >> n;
	string str;
	cin >> str;
	int x = 0;
	char s[] = "ANSAMBLE";
	for (int i = 0; i < 8; i++)
	{
		int x = 0;
		for (int j = 0; j < n; j++)
		{
			if (str[j] == s[i])
				x++;
		}
		if (!x)
		{
			cout << "TAKE IT" << endl;
			return ;
		}
	}
	cout << "LEAVE IT" << endl;
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
		solve();
}