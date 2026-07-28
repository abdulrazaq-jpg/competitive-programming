// Maximum Neighbourhood

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[101][101];

    int x = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            arr[i][j] = x;
            x++;
        }
    }

    if(n==1)
    {
        cout << 1 << "\n";
        return;
    }

    if(n==2)
    {
        cout << 9 << "\n";
        return;
    }

    if(n==3)
    {
        cout << 29 << "\n";
        return;
    }

    if(n==4)
    {
        cout << 56 << "\n";
        return;
    }

    if(n > 4)
    {
        int ans = arr[n-1][n-2] + arr[n-1][n-1] + arr[n-1][n] + arr[n-2][n-1] + arr[n][n-1];

        cout << ans << "\n";
        return;
    }
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


/*
#include <bits/stdc++.h>
 using namespace std;
 int dx[] = {-1, 0, 1, 0};int dy[] = {0, -1, 0, 1};
 int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        auto get = [&](int x, int y) {
            if (x >= 0 && x < n && y >= 0 && y < n) return x * n + y + 1;
            return 0;
        };
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int cur = get(i, j);
                for (int d = 0; d < 4; ++d) cur += get(i + dx[d], j + dy[d]);
                ans = max(ans, cur);
            }
        }
        cout << ans << '\n';
    }}

What is this code . Explain me

*/