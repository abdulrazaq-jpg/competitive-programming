#include <iostream>
#include <vector>
using namespace std;

bool ispalindrome(long long n)
{
    long long i = n;
    long long rev = 0;
    while (n > 0)
    {
        long long d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    if (i == rev)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin >> t;

    vector<long long> v;

    int p[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11};

    while (t--)
    {
        long long n;
        cin >> n;
        v.push_back(n);
    }

    for (int i = 0; i < v.size(); i++)
    {
        int r = v[i] % 12;

        long long pal = p[r];

        if (pal > v[i])
            cout << -1 << "\n";
        else
            cout << pal << " " << v[i] - pal << "\n";
    }

    return 0;
}