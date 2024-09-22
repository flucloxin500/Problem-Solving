/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char CH[200];
    int x, i;
    cin >> CH;
    x = strlen(CH);
    for (i = 0; i < x; i++)
    {
        if (CH[i] == '-')
        {
            if (CH[i + 1] == '.')
            {
                cout << "1";
                i++;
            }
            else if (CH[i + 1] == '-')
            {
                cout << "2";
                i++;
            }
        }
        else if (CH[i] == '.')
        {
            cout << "0";
        }
    }
    return 0;
}
