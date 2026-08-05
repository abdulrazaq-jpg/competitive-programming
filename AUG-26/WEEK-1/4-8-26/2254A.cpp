// Riptide

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(),v.end());

    int i = v[2] - v[1];
    int j = v[1] - v[0];

    int cnt = min(i,j);

    cout << cnt << "\n";
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