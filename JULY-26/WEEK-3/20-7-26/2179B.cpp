// Blackslex and Showering

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);
    long long total = 0;

    for(int i = 0; i < n ; i ++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < n-1 ; i ++)
    {
        total += abs(v[i] - v[i+1]);
    }

    long long time = total - abs(v[0]-v[1]);
    time = min(time , total - abs(v[n-2]-v[n-1]));

    for(int i = 1; i <= n-2; i++)
    {
        long long change = - abs(v[i-1]-v[i]) - abs(v[i+1]- v[i]) + abs(v[i-1] - v[i+1]);

        time = min(time , total + change);
    }

    cout << time << "\n";
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