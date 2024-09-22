/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    int a[100010];
    int k, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        k = 0;
        j = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                k++;
            }
            if (a[i] == 0)
            {
                j++;
            }
        }
        if ( j > 0)
        {
            cout<<"0"<<endl;
        }
        else if ( k % 2 != 0 )
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
        }
    }
    return 0;
}
