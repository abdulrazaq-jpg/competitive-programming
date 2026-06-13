# include <iostream>
using namespace std;

int main()
{
    int arr[5][5];

    int a = -1;
    int b = -1;

    for(int i = 0; i < 5; i++)
    {
        for(int  j = 0 ; j<5; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j]==1)
            {
                a = i;
                b = j;
            }
        }
    }
    
    int ans = abs(2-a) + abs(2-b);

    cout << ans;
    return 0;
}