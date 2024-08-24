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

	int n;
	cin >> n;
    vector<int> v1(n);
	for (int i = 0; i < n; i++)
        cin >> v1[i];
	cin >> n;
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    vector<int> v3;
    int count = 0;
    for (auto it = v1.begin(); it != v1.end(); ++it)
    {
        if (find(v2.begin(), v2.end(), *it) == v2.end())
        {
            v3.push_back(*it);
            count++;
        }
    }
    cout << count << endl;
    for (auto it = v3.begin(); it != v3.end(); ++it)
       cout << *it << " ";
	return 0;
}