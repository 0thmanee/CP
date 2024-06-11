#include <iostream>
#include <algorithm>
using namespace std;
void solve(long n)
{
	cout << n;
	if (n != 1)
		cout << " ";
	if (n != 1)
	{
		if (!(n % 2))
			solve(n / 2);
		else
			solve(n * 3 + 1);
	}
}

int main()
{
	long n;
	cin >> n;
	solve(n);
}