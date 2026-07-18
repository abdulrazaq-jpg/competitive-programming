// Right Maximum

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    int ans = 1 ;

    int max = v[0];

    for(int i = 1 ; i < n ; i++)
    {
        if(v[i]>=max)
        {
            max = v[i];
            ans++;
        }
    }

    cout << ans << "\n";

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

// SAW THE HINT BUT SOLVED BY MY METHOD