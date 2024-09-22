/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n , x , y;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout <<n<<" "<<n<<endl;
        }
        else if ( n == 2)
        {
            cout <<"1 "<<n<<endl;
        }
        else if ( n % 2 != 0)
        {
            y = n % 2 ;
            x = n / 2 ;
            cout <<x+y<<" "<<n<<endl;
        }
        else
        {
            x = n / 2 ;
            cout <<x<<" "<<n<<endl;
        }
    }

    return 0;
}
