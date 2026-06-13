# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    int cnt = 0;

    while(n--)
    {
        string s;
        getline(cin,s);

        string s1 = "++";
        string s2 = "--";

        if(s.find(s1) != string::npos)
        cnt++;
        if(s.find(s2) != string::npos)
        cnt--;
    }

    cout << cnt;
    
    return 0;
}