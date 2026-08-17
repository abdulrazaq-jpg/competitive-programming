// Creating Abbreviations

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int freq_1[26] = {0};
    int freq_2[26] = {0};

    while (n--)
    {
        string s;
        cin >> s;

        if (freq_1[s[0] - 'a'] == 0)
        {
            freq_1[s[0] - 'a'] = 1;
        }
    }

    while (m--)
    {
        string a;
        cin >> a;

        for (int i = 0; i < a.length(); i++)
        {
            a[i] = tolower(a[i]);

            if (freq_2[a[i] - 'a'] == 0)
            {
                freq_2[a[i] - 'a'] = 1;
            }
        }
    }

    string abv = "";

    for (int i = 0; i < 26; i++)
    {
        if (freq_2[i] == 1)
        {
            abv += (char)('a' + i);
        }
    }

    bool flag = true;

    for (int i = 0; i < abv.length(); i++)
    {
        if(freq_1[abv[i] - 'a'] == 0)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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