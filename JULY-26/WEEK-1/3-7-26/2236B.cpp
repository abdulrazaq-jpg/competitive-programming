#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> tracks(k, 0);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                tracks[i % k]++;
            }
        }

        bool flag = true;

        for (int i = 0; i < k; i++)
        {
            if (tracks[i] % 2 != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << "\n";

        else
            cout << "NO" << "\n";
    }

    return 0;
}