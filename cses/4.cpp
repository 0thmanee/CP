#include <iostream>
#include <numeric>
#include <vector>
#include <map>
using namespace std;

void solve() {
	int n;
	cin >> n;
	long arr[n];
	long moves = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			moves += arr[i - 1] - arr[i];
			arr[i] += arr[i - 1] - arr[i];
		}
	}
	cout << moves;
}

int main() {
    solve();
    return 0;
}