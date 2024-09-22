/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int m = S.length();
    if ( m < 8)
    {
        cout<<"No";
    }
    else
    {
        if( (S[0] >= 'A' && S[0] <= 'Z' ) && (S[m-1] >='A' && S[m-1] <= 'Z'))
        {
            if( S[1] == '0' || (S[1] >= 'A' && S[1] <='Z'))
            {
                cout<<"No";
            }
            else
            {
                cout<<"Yes";
            }
        }
        else
        {
            cout<<"No";
        }
    }
    return 0;
}