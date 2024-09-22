/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;

    cin >> N;
    int f = 0;
    cin >> S;
    if (N == 1)
    {
        cout << "Yes";
    }
    else
    {
        for (int i = 0; i < N - 1; i++)
        {
            if (S[i] == S[i + 1])
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
    }
    return 0;
}