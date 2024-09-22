
/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long Alice,Bob , AB ;
    while (t--)
    {
        cin>>Alice>>Bob;
        AB = Alice + Bob ;
        if (AB % 2 == 0)
        {
            cout<<"Bob"<<endl;
        }
        else if (AB %2 != 0)
        {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}