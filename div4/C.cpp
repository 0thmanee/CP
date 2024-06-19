#include <iostream>
#include <numeric>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
 
void solve()
{
	long long n;
	cin >> n;
	vector<long long> vect(n);
	for (long long i = 0; i < n; i++)
		cin >> vect[i];
	long long pref = 0;
	if (vect[0] == 0)
		pref++;
	for (long i = 1; i < n; i++)
	{
		vector<long long> subvect(vect.begin(), vect.begin() + i + 1);
		sort(subvect.begin(), subvect.end());
		if (accumulate(subvect.begin(), subvect.end() - 1, 0L) == subvect[subvect.size() - 1])
			pref++;
	}
	cout << pref << endl;
}
 
int main()
{
	int n;
	cin >> n;
	while (n--)
		solve();
}