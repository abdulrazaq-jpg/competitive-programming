// Passing the Ball

#include <iostream>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<int, int> map;

    int j = 1;
    map[j] = 1;

    for (int i = 0; i < n; i++)
    {
        if (s[j-1] == 'R')
        {
            j++;

            map[j]++;
        }

        if (s[i-1] == 'L')
        {
            j--;

            map[j]++;
        }
    }

    int cnt = 0;

    for (auto it : map)
    {
        if (it.second > 0)
        {
            cnt++;
        }
    }

    cout << cnt << '\n';
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

// SOLVED MYSELF