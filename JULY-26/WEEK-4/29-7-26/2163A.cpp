// Souvlaki VS. Kalamaki

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n+1);

    for(int i = 1; i<=n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for(int i = 3; i <= n; i+=2)
    {
        if(v[i] != v[i-1])
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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