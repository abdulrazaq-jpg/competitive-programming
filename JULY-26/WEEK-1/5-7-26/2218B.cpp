// The 67th 6-7 Integer Problem

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void solve()
{
    vector<int> v(7);

    for(int  i = 0 ; i < 7 ; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), std::less<int>());

    int sum = 0;

    for(int i = 5; i >= 0 ; i--)
    {
        sum -= v[i];
    }

    sum += v[6];

    cout << sum << "\n";
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


// KHUD SE KAR LIYA