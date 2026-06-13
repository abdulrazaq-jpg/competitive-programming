#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> v;

    int width = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= h)
        {
            width += 1;
        }

        else
            width += 2;
    }

    cout << width;

    return 0;
}