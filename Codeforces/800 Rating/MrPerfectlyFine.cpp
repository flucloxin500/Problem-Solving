/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, MinI, MinJ, MinIf, MinJf, One, OneF;
    long long n, m[100010];
    cin >> t;
    string CH;
    while (t--)
    {
        MinI = 9999;
        MinJ = 9999;
        One = 9999;
        MinIf = 0;
        MinJf = 0;
        OneF = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> m[i] >> CH;
            if (CH == "11")
            {
                if (m[i] <= One)
                {
                    One = m[i];
                    OneF = 1;
                }
            }
            else if (CH == "01")
            {
                if (m[i] <= MinI)
                {
                    MinI = m[i];
                    MinIf = 1;
                }
            }
            else if (CH == "10")
            {
                if (m[i] <= MinI)
                {
                    MinJ = m[i];
                    MinJf = 1;
                }
            }
        }
        if (OneF + MinIf + MinJf == 3)
        {
            if ( MinI + MinJ < One)
            {
                cout<<MinI+MinJ<<endl;
            }
            else if ( MinI + MinJ > One)
            {
                cout<<One<<endl;
            }
            else if ( MinI + MinJ == One)
            {
                //cout<<One<<endl;
                cout<<MinI+MinJ<<endl;
            }
        }
        else if (MinIf + MinJf == 2)
        {
            cout << MinI + MinJ << endl;
        }
        else if (OneF == 1)
        {
            cout << One << endl;
        }
        else
        {
            cout << "-1" << endl;
    
        }
    }
    return 0;
}
