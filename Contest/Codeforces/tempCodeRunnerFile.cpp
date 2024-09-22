
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

        for (i = 0; i < n; i++)
        {
            Plus = 0;
            Minus = 0;
            cin >> S;
            if (S == '-')
            {
                Minus++;
            }
            else if (S == '+')
            {
                Plus += (-1);
            }

            cout << Plus;
        }
    }
    return 0;
}