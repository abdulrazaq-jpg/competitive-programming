// 1-1

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int max = 0;

    for(int i = 1; i<n-1 ; i++)
    {
        if(s[i]== '0')
        {
            if(s[i-1]=='1' && s[i+1]=='1')
            {
                s[i] = '1';
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(s[i]=='1')
        {
            max++;
        }
    }

    int min = 0;

    for(int i = 1; i<n-1 ; i++)
    {
        if(s[i]== '1')
        {
            if(s[i-1]=='1' && s[i+1]=='1')
            {
                s[i] = '0';
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(s[i]=='1')
        {
            min++;
        }
    }

    cout << min << " " << max << "\n";
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

// KHUD SE KIYA