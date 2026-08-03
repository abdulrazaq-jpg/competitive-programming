#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a) {
        cin >> x;
    }
    for (int &x : b) {
        cin >> x;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Each element in 'b' needs at least 2 elements from 'a' (one strictly smaller and one strictly larger)
    if (n < 2 * m) {
        cout << "NO\n";
        return;
    }

    int i = 0;
    // For every b[i], check if a[i] < b[i] and b[i] < a[n - m + i]
    while (i < m && a[i] < b[i] && b[i] < a[n - m + i]) {
        ++i;
    }

    if (i < m) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}