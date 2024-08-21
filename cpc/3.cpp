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
	cin >> t;
    vector<int> v(t);
	for (int i = 0; i < t; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
     for (auto it = v.begin(); it != v.end(); ++it)
       cout << *it << " ";
	return 0;
}