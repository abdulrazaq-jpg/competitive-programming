// Yuu Koito and Minimum Absolute Sum

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i < n; i++)
    {
        cin >> v[i];
    }

    if(v[0]==-1 && v[n-1]!=-1)
    {
        v[0] = v[n-1];
    }

    if(v[0] != -1 && v[n-1]==-1)
    {
        v[n-1] = v[0];
    }

    for(int i = 0; i < n; i++)
    {
        if(v[i] == -1)
        {
            v[i] = 0;
        }
    }

    int diff = abs(v[0] - v[n-1]);

    cout << diff << "\n";

    for(int i = 0; i < n; i++)
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