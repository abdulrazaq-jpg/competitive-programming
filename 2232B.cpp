// Cake Leveling

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> v(n);

    for(long long i= 0; i < n ;i++)
    {
        cin >> v[i];
    }
    
    long long max_height = v[0];

    long long sum = 0;

    for(long long i = 0; i< n; i++)
    {
        sum += v[i];

        long long avg = sum / (i+1);

        max_height = min(avg , max_height);

        cout << max_height << " ";
    }

    cout << "\n";
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