#include <iostream>
#include <numeric>
#include <vector>
#include <map>
using namespace std;

void solve() {
	string str;
	cin >> str;
	int seq = 0;
	int acc = 0;
	int c;
	int i = 0;
	while (i < str.size())
	{
		c = str[i];
		acc = 0;
		while (str[i] == c)
			(acc++, i++);
		if (acc > seq)
			seq = acc;
	}
	cout << seq;
}

int main() {
    solve();
    return 0;
}