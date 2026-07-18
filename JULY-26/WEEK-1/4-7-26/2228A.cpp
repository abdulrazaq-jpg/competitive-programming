//  Marisa Steals Reimu's Takeout

#include <iostream>
#include <vector>
# include <algorithm>
using namespace std;

int solve()
{
    int n;
    cin >> n;

    int cnt = 0;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            cnt++;
        }

        else
        {
            v.push_back(x);
        }
    }

    int k = v.size();

    int cnt2 = 0;

    sort(v.begin(),v.end(),less<int>());
    int L = 0;
    int R = k-1;

    while(L < R)
    {
       if(v[L]==1 && v[R]==2)
       {
            cnt2++;
            L++;
            R--;
       }

       else
       {
            break;
       }
    }

    int remaining = R - L + 1;
    if(remaining >= 3)
    {
        cnt += remaining/3;
    }

    return cnt+cnt2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        cout << solve() << "\n";
    }

    return 0;
}


// BETTER APPROACH {COUNTER APPROACH}

#include <iostream>
#include <algorithm>
using namespace std;

void solve1()
{
    int n;
    cin >> n;

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        if (w == 0) count0++;
        else if (w == 1) count1++;
        else count2++;
    }

    // 1. Every '0' can be removed by itself since 0 is divisible by 3
    int ans = count0;

    // 2. Pair up as many (1, 2) combinations as possible (1 + 2 = 3)
    int pairs = min(count1, count2);
    ans += pairs;

    // Reduce the counts by the number of elements we just paired up
    count1 -= pairs;
    count2 -= pairs;

    // 3. Group any leftover identical elements into sets of 3
    // (1+1+1 = 3) and (2+2+2 = 6, both divisible by 3)
    ans += count1 / 3;
    ans += count2 / 3;

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve1();
    }

    return 0;
}