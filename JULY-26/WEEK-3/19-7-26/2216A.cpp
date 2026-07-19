// Course Wishes

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    // Fix 2: 1-based index setup for capacities
    vector<int> a(k + 2, 0);
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    a[k + 1] = 1e9; // Level k+1 has infinite capacity

    vector<int> b(n);
    vector<int> cnt(k + 2, 0);

    // Fix 1: Read directly into b[i]
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        cnt[b[i]]++;
    }

    vector<int> ans;

    while (true)
    {
        int target_course = -1;

        for (int i = 0; i < n; i++)
        {
            int cur_level = b[i];

            if (cur_level == k + 1)
            {
                continue;
            }

            // Fix 3: Check capacity of the NEXT level down
            if (cnt[cur_level + 1] < a[cur_level + 1])
            {
                if (target_course == -1 || b[i] > b[target_course])
                {
                    target_course = i;
                }
            }
        }

        if (target_course == -1)
            break;

        int old_level = b[target_course];
        cnt[old_level]--;
        b[target_course]++;
        cnt[old_level + 1]++;

        ans.push_back(target_course + 1);
    }

    bool success = true;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != k + 1)
        {
            success = false;
            break;
        }
    }

    if (!success || ans.size() > 1000)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }
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