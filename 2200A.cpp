// Eating Game

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    int max = -1;

    for(int i = 0; i< n; i++)
    {
        cin >> v[i];
        
        if(v[i] > max)
        {
            max = v[i];
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(v[i]==max)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";
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