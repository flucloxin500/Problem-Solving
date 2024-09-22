/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x, j;
    int extra;
    char in;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int T=0;
        int i=0;
        int m=0;
        int u=0;
        int r=0;
        int total = 0;
        cin >> x;
        for (j = 0; j < x; j++)
        {
            cin >> in;
            if (in == 'T')
            {
                T++;
            }
            else if (in == 'i')
            {
                i++;
            }
            else if (in == 'm')
            {
                m++;
            }
            else if (in == 'u')
            {
                u++;
            }
            else if (in == 'r')
            {
                r++;
            }
        }
        total = T+i+m+u+r ;
        if (((T == 1 && i ==1) && (m == 1 && u == 1)) && ((r == 1 && total == x)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    /*

    */

    return 0;
}