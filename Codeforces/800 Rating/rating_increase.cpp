
/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long X1, X2;
    int first, second, t, i;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string ab, ab1, ab2;
        cin >> ab;
        for (i = 1; i < ab.size(); i++)
        {
            if (ab[i] != '0') // 20002001
            {
                first = i;
                second = i - 1;
                break;
            }
            else if (ab[i] == '0')
            {
                count++;
            }
        }
        if (count + 1 == ab.size())
        {
            cout << "-1"<<endl;
        }
        else
        {
            for (int j = 0; j < first; j++)
            {
                ab1 += ab[j];
            }
            for (int k = first; k < ab.size(); k++)
            {
                ab2 += ab[k];
            }
            X1 = stoi(ab1);
            X2 = stoi(ab2);
            if (X1 == X2)
            {
                cout << "-1" << endl;
            }
            else if ( X1 > X2 )
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << X1;
                cout << " ";
                cout << X2;
                cout << endl;
            }
        }
    }
    return 0;
}