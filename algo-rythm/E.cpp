#include <iostream>
#include <string>
using namespace std;

void solve()
{
	int f, a;
	cin >> f >> a;
	if (f < 10 && a < 10)
	{
		if (((f + a) / 2 ) % 2)
			cout << "Alex";
		else
			cout << "Flytoox";
	}
	else
	{
		f -= 10;
		a -= 10;
		if (((f + a)) % 2)
			cout << "Alex";
		else
			cout << "Flytoox";
	}
}

int main()
{
	solve();
}