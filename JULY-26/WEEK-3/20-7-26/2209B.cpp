// Array

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i< n ; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i<n; i++)
    {
        int cnt_greater = 0;
        int cnt_lesser = 0;

        for(int j = i+1; j<n; j++)
        {
            if(a[j] > a[i])
            {
                cnt_greater++;
            }
            if(a[j] < a[i])
            {
                cnt_lesser++;
            }
        }

        cout << max(cnt_greater,cnt_lesser) << " ";
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