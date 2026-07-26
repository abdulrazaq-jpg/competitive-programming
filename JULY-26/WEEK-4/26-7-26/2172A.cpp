// ASCII Art Contest

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int g,c,l;
    cin >> g >> c >> l;

    vector<int> v;

    v.push_back(g);
    v.push_back(c);
    v.push_back(l);

    sort(v.begin(),v.end());

    int M = v[2];
    int m = v[0];

    //cout << M << " " << m << "\n";

    int d1 = abs(g-c);
    int d2 = abs(c-l);
    int d3 = abs(g-l);

    //cout << d1 << " " << d2 << " " << d3 << "\n";

    if(d1>=10 || d2>=10 || d3>=10)
    {
        cout << "check again\n";
    }
    else
    {
        cout << "final " << v[1] <<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}