/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long a;
        long long sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            sum += a;
        }
        double sq = sqrt(sum);
        int sq1;
        sq1 = sq ;
        if (sq == sq1)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }

    return 0;
}
