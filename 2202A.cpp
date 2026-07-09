// Parkour Design

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int x,y;
    cin >> x >> y;

    bool flag1 = false;

    if((x-(2*y)) % 3 == 0)
    flag1 =true;

    bool flag2 = false;

    if((y>=0) && (x>=2*y))
    {
        flag2 = true;
    }

    if ((y < 0) && (x >= (-4*y)))
    {
        flag2 = true;
    }
    

    if(flag1 && flag2)
    {
        cout << "yes" << "\n";
    }
    else
    {
        cout << "no" << "\n";
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

// SAW THE HINT