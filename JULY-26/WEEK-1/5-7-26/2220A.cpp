// Blocked

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), std::greater<int>());

    bool flag = true;

    for (int i = 1; i < n; i++)
    {
        if(v[i]==v[i-1])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    }

    else
    {
        cout << -1;
    }
    
    cout << "\n";

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

// KHUD SE KIYA