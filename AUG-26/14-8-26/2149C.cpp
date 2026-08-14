// MEX rose

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> missing(n);

    int cnt_k = 0;
    int me = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == k)
        {
            cnt_k++;
        }

        if(x < k)
        {
            missing[x]++;
        }
    }

    cout << (cnt_k) << "\n";
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