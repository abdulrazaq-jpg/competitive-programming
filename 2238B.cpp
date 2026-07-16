// Crimsom Triples

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long ans = 0;

    for(int b = 1; b <= n ; b++)
    {
        ans += 1ll * (n/b) * (n/b);
    }

    cout << ans << "\n";
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


// SAW THE EDITORIAL COZ THE PATTERN WAS NEW