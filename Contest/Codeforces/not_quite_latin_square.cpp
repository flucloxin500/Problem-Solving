/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j;
    cin >> t;

    char ABC[3][3];
    int sum = 0;

    while (t--)
    {
        int A = 0;
        int B = 0;
        int C = 0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> ABC[i][j];
                if (ABC[i][j] == 'A')
                {
                    A++;
                }
                else if (ABC[i][j] == 'B')
                {
                    B++;
                }
                else if (ABC[i][j] == 'C')
                {
                    C++;
                }
            }
        }
        if ((A == 3 && B == 3) && C != 3)
        {
            cout << "C" << endl;
        }
        else if ((A == 3 && C == 3) && B != 3)
        {
            cout << "B" << endl;
        }
        else if ((C == 3 && B == 3) && A != 3)
        {
            cout << "A" << endl;
        }
    }

    return 0;
}
