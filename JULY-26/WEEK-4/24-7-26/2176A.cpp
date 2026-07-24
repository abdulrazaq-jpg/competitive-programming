// Operations with Inversions

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int cmx = 0;
 
    int mx = 0;
 
    for (int i = 0; i < n; i++) {
        mx = max(mx, a[i]);
        if (a[i] == mx) cmx++;
    }
 
    int res = n - cmx;
    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}