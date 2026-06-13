#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    int ans = -1;

    if(M%2==0 && N%2!=0)
    {
        ans = N*(M/2);
    }
    else if(M%2!=0 && N%2==0)
    {
        ans = M*(N/2);
    }
    else if(M%2==0 && N%2==0)
    {
        if(M>N)
        {
            ans = M*(N/2);
        }
        else
        {
            ans = N*(M/2);
        }
    }
    else
    {
        ans = (M*N)/2;
    }

    cout << ans;

    return 0;
}