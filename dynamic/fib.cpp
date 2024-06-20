#include <iostream>
#include <map>
using namespace std;

unsigned long long solve(int n, map<int, unsigned long long>& memo)
{
	if (memo.find(n) != memo.end()) return memo[n];
	if (n <= 2) return 1;
	memo[n] = solve(n - 1, memo) + solve(n - 2, memo);
	return memo[n];
}

int main()
{
	map<int, unsigned long long> memo;
	int n;
	cin >> n;
	cout << solve(n, memo) << endl;
}
