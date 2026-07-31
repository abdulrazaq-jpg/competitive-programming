// Suspension

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;
    int y , r;
    cin >> y >> r;

    int p = r + (y/2);

    if(p > n)
    {
        cout << n << "\n";
    }
    else
    {
        cout << p << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}