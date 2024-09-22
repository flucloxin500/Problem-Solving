
/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    int a[11];
    int sorted[11];
    int len;
    long long mul;
    cin >> t;
    while (t--)
    {
        mul = 1;
        cin >> n;
        for ( i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for ( i = 1 ; i < n ; i++)
        {
            mul *= a[i];
        }
        a[0] = a[0] +1 ;
        cout<<a[0]*mul<<endl;
    }
    return 0;
}