#include <iostream>
#include <numeric>
#include <vector>
#include <map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n != 1 && n < 4)
	{
		cout << "NO SOLUTION";
		return ;
	}
	for (int i = 1; i <= n; i++)
		!(i % 2) && cout << i << (i != (n % 2 ? n : n - 1) ? " " : "");
	for (int i = 1; i <= n; i++)
		(i % 2) && cout << i << (i != (n % 2 ? n : n - 1) ? " " : "");
}

int main() {
    solve();
    return 0;
}