// Everything Everywhere

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;

    for(int i = 0; i<n-1; i++)
    {
        int cal = a[i] % (a[i]-a[i+1]);

        if(cal == 0)
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