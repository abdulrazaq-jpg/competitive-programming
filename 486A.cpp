# include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;

    long k=0;
    long p=0;

    if(n%2==0)
    {
        k = n/2;
        p = n/2;

    }
    else
    {
        k = (n+1)/2;
        p = (n-1)/2;
    }
    
    long sum_k = k*k;
    long sum_p = p*(p+1);

    long sum = sum_p - sum_k;

    cout << sum;

    return 0;
}