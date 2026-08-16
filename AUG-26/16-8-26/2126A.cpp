// Only One Digit

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    int d = n;

    while(n>0)
    {
        d = min(d, n%10);
        n/=10;
    }

    cout << d << "\n";

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