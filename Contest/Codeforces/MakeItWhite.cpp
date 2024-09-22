/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, index;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n;
        cin >> s;
        int end = -1 , beg = -1 , count = 0;
        for (i = n; i > 0 ; i--)
        {
            if (s[i] == 'B')
            {
                end = i;
                break;
            }
            else 
            {
                end = 0 ;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B')
            {
                beg = j ;
                break;
            }
            else
            {
                beg = 0;
            }
        }
        cout <<end-beg+1<< endl;
    }
}