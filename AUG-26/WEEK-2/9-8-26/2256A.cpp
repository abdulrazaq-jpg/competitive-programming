// Three Numbers on the Blackboard

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;

    vector<long long> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(),v.end());

    long long sum = v[0] + v[1];
    long long ans;

    if(sum < v[2])
    {
        ans = sum - v[0];
    }
    else
    {
        ans = v[2] - v[0];
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