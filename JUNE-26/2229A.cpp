# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int size = n;

        vector<int> v;

        while(n--)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(),v.end(),less<int>());

        int ans = ceil((v[size-1]-v[0]) / 2.0);

        cout << ans << "\n";

    }
    
    return 0;
}