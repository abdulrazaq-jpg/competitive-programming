// New Year String

#include <iostream>
#include <string>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool has_2026 = s.find("2026") != string::npos;
    bool has_2025 = s.find("2025") != string::npos;

    if (has_2026)
    {
        return 0;
    }
    if (has_2025)
    {
        return 1;
    }

    return 0;
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