// Snowfall

#include <iostream>
#include <vector>
using namespace std;

void slove()
{
    int n;
    cin >> n;

    vector<int> two;
    vector<int> three;
    vector<int> both;
    vector<int> none;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0 && x % 3 == 0)
        {
            both.push_back(x);
        }

        else if (x % 2 == 0)
        {
            two.push_back(x);
        }

        else if (x % 3 == 0)
        {
            three.push_back(x);
        }

        else
        {
            none.push_back(x);
        }
    }

    for (int x : both)  cout << x << " ";
    for (int x : two)   cout << x << " ";
    for (int x : none)  cout << x << " ";
    for (int x : three) cout << x << " ";
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        slove();
        cout << '\n';
    }

    return 0;
}