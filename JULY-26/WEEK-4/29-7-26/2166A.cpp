// Same Difference

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i< n-1; i++)
    {
        if(s[i] != s[n-1])
        {
            count++;
        }
    }

    cout << count << "\n";
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