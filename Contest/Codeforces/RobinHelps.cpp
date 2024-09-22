/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ind = 0;
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            int ar;
            cin >> ar;

            if (ar >= k)
            {
                ind += ar;
                ar = 0;
            }
            else if (ar == 0 && ind > 0)
            {
                ind -= 1;
                cnt += 1;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}