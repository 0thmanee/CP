#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<long long> vll;

void solve() {
    ll n, q;
    cin >> n >> q;
    vll v(n), prefix_sum(n + 1, 0);

    // Read input and compute prefix sums
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        prefix_sum[i + 1] = prefix_sum[i] + v[i];
    }

    // Process queries
    for (ll i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        // Use prefix sum array to compute range sum
        cout << (prefix_sum[b] - prefix_sum[a - 1]) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
