/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    cin >> t;
    int Plus, Minus;
    int total = 0;
    while (t--)
    {
        cin >> n;
        char S;
        Plus = 0;
        Minus = 0;
        for (i = 0; i < n; i++)
        {
            cin >> S;
            if (S == '-')
            {
                Minus+=(-1);
            }
            else if (S == '+')
            {
                Plus += (+1);
            }
        }
        total = abs(Plus+Minus);
        cout<<total<<endl;
    }
    return 0;
}