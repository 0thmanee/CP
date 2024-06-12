#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int mx = 0;
		string s2;
		for (auto it = s.begin(); it != s.end(); it++) {
			s2.clear();
			for (auto it2 = it; it2 != s.end(); it2++) {
				if (find(s2.begin(), s2.end(), *it2) == s2.end())
					s2.push_back(*it2);
				else break;
			}
			if (s2.size() > mx)
				mx = s2.size();
		}
		return mx;
	}
};

void ft(vector<int> t)
{
	set
}
int main()
{
	Solution s;
	string str = "abc";
	cout << s.lengthOfLongestSubstring(str) << endl;
}