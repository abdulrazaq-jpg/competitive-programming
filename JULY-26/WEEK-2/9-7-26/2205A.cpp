// Simons and Making It Beautiful

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];

        if(v[i] == n)
        {
            int temp = v[i];
            v[i] = v[0];
            v[0] = temp;
        }
    }

    for(int i = 0 ; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";
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