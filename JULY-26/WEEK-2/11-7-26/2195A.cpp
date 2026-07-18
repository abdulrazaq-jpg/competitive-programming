// Sieve of Erato67henes

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    bool flag = false;

    for(auto &it : v)
    {
        cin >> it;

        if(it == 67)
        {
            flag = true;
        }
    }

    if(flag)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
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