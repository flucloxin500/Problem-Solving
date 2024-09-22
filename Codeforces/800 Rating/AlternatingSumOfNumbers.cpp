#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;

// shortcut
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define minus_one cout << -1 << endl
#define nl cout << endl

// Loop
#define FOR0(i, n) for (int i = 0; i < n; i++)  // 0 based indexing
#define FOR1(i, n) for (int i = 1; i <= n; i++) // 1 based indexing

int main()
{
    int t , n ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        int a[n+5] , plus = 0 , minus = 0 ;
        FOR0(i,n)
        {
            cin >> a[i] ;
        }
        for ( int i = 0 ; i < n ; i += 2)
        {
            plus += a[i];
        }
        for ( int i = 1 ; i < n ; i += 2)
        {
            minus += a[i];
        }
        cout<<plus-minus<<endl;
    }
    return 0;
}
