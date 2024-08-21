#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <fstream>
#include <cassert>
#include <random>
#include <sstream>
using namespace std;

int main()
{

	int t;
    vector<int> v;
	cin >> t;
	while (t--)
    {
        int inp;
        cin >> inp;
        if (inp >= 0)
            inp += 2;
        v.push_back(inp);
    }
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it;
        if (it != v.end() - 1)
            cout << " ";
    }
	return 0;
}