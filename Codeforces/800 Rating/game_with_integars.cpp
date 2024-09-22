/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n , vanya , vova;
    cin >> t;
    while (t--)
    {
        cin>>n;
        if (n == 1)
        {
            cout<<"First"<<endl;
        }
        else if ( n % 3 == 0)
        {
            cout<<"Second"<<endl;
        }
        else if ( n % 3 != 0 )
        {
            cout<<"First"<<endl;
        }
    }

    return 0;
}
