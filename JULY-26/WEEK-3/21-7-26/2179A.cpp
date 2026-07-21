/**
 * Problem: Blackslex and Password
 * Time Complexity: O(1) per test case
 * Space Complexity: O(1)
 */

#include <iostream>

using namespace std;

void solve() {
    long long k, x;
    cin >> k >> x;

    // By Pigeonhole Principle across x independent tracks:
    // Max valid length = k * x
    // Minimal impossible length = k * x + 1
    cout << k * x + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}