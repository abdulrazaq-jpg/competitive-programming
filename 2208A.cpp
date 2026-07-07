// Bingo Candies

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n][n];

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            map[arr[i][j]]++;
        }
    }

    bool flag = true;

    for (auto it : map)
    {
        if (it.second > (n * n) - n)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << "\n";
    }

    else
        cout << "NO" << "\n";
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


// SOLUTION DEKHA AUR HASHING KE BASICS SEEKHA