/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j;
    cin >> t;
    int abcd[10010];
    int sum = 0;
    for (i = 0; i < t; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            cin >> abcd[j];
        }
        for (j = 0; j < 4; j++)
        {
            if (abcd[0] < abcd[j + 1])
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }

    
    return 0;
}
