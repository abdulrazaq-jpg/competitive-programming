// Gigantomachy

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n , m;
    cin >> n >> m;

    vector<int> bea(n);
    for(int i=0; i < n; i++)
    {
        cin >> bea[i];
    }

    vector<int> ver(m);
    for(int i=0; i < m; i++)
    {
        cin >> ver[i];
    }

    sort(bea.begin(),bea.end(),std::greater<int>());
    sort(ver.begin(),ver.end(),std::greater<int>());

    int bea_rnd = 0;
    for(int i = 0; i < n-1; i++)
    {
        bea_rnd += (bea[i] - bea[i+1] + 1);
    }
    bea_rnd += bea[n-1];

    int ver_rnd = 0;
    for(int i = 0; i < m-1; i++)
    {
        ver_rnd += (ver[i] - ver[i+1] + 1);
    }
    ver_rnd += ver[m-1];

    if(bea_rnd >= ver_rnd)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
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