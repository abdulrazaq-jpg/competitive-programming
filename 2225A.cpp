// A Number Between Two Others

// FIRST BAAR ME TLE HIT HUI THI !!!!!!!
 
#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    long long x,y;
    cin >> x >> y;
 
    bool flag = false;
 
    if(y != (2*x))
    {
        flag = true;
    }
 
    if(flag)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
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