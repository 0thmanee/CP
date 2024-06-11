#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(long n) {
    vector<int> arr(n - 1);
    for (long i = 0; i < n - 1; i++)
        cin >> arr[i];
    long actual = accumulate(arr.begin(), arr.end(), 0L);
    long expec_sum = (n * (n + 1)) / 2; 
    cout << expec_sum - actual;
}

int main() {
    long n;
    cin >> n;
    solve(n);
    return 0;
}