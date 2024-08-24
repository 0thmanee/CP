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
    stack<long long> s;
	for (int i = 0; i < t; i++)
    {
        int q;
        cin >> q;
        switch (q)
        {
            case 1:
                long long n;
                cin >> n;
                s.push(n);
                break;
            case 2:
                if (!s.empty())
                    s.pop();
                break ;
            case 3:
                if (!s.empty())
                    cout << s.top() << endl;
                else
                    cout << "Empty!" << endl;
                break ;
        }
    }
	return 0;
}