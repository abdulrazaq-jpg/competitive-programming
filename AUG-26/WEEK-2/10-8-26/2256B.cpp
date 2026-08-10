// Domino Tiles

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    string s; cin >> s;

    if(n == 2)
    {
        if((s[0] != '?' && s[1] == '?') || (s[0] == '?' && s[1] != '?'))
        {
            cout << 2 << "\n";
            return;
        }
        
        cout << 4 << "\n";
        return;
    }

    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == '1')
        {
            if(s[i+2] == '0')
            {
                continue;
            }
            else if(s[i+2] == '1')
            {
                cout << 0 << "\n";
                return;
            }
            else
            {
                cout << 1 << "\n";
                return;
            }
        }

        if(s[i] == '0')
        {
            if(s[i+2] == '1')
            {
                continue;
            }
            else if(s[i+2] == '0')
            {
                cout << 0 << "\n";
                return;
            }
            else
            {
                cout << 1 << "\n";
                return;
            }
        }

        if(s[i] == '?')
        {
            if(s[i+1] == '?' && s[i+2] != '?')
            {
                cout << 2 << "\n";
                return;
            }

            if(s[i+1] == '?' && s[i+2] == '?')
            {
                cout << 4 << "\n";
                return;
            }

            if(s[i+1] != '?' && s[i+2] != '?')
            {
                cout << 1 << "\n";
                return;
            }

            if(s[i+1] != '?' && s[i+2] =='?')
            {
                cout << 2 << "\n";
                return;
            }
        }
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