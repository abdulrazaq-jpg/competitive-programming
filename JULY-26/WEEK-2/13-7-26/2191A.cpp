// Array Coloring

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int  i = 0 ; i < n ;i++)
    {
        cin >> v[i];
    }

    bool flag =true;

    for(int i = 1 ; i < n; i++)
    {
        if((v[i-1] % 2 == 0 && v[i] % 2 == 0) || (v[i-1] % 2 != 0 && v[i] % 2 != 0))
        {
            flag = false;
            break;
        }
    }

    if(flag)
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

    while(t--)
    {
        solve();
    }

    return 0;
}

// SOLVED MYSELF