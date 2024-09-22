
/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
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

// Reverse a number
ll reverse_num(ll n)
{
    ll tmp = n, ans = 0, r;
    while (tmp)
    {
        r = tmp % 10;
        ans = ans * 10 + r;
        tmp /= 10;
    }
    return ans;
}
// find GCD
ll gcd(ll num1, ll num2)
{
    ll a, b, r;
    a = num1;
    b = num2;
    r = a % b;
    while (r > 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
// find LCM
ll lcm(ll num1, ll num2)
{
    return (num1 * num2) / gcd(num1, num2);
}
void Solve()
{
    int n;
        int U = 0 , R = 0 , D = 0 , L = 0 ;
        cin>>n;
        int xi[150] , yi[150] ;

        for ( int i = 0 ; i < n ; i++)
        {
            cin>>xi[i]>>yi[i];
            if ( xi[i] > 0 )
            {
                R = 1 ;
            }
            else if ( xi[i] < 0 )
            {
                L = 1 ;
            }
            if ( yi[i] > 0)
            {
                U = 1 ;
            }
            else if ( yi[i] < 0 )
            {
                D = 1 ;
            }
        }
        if (U+R+L+D < 4)
        {
            YES;
        }
        else
        {
            NO;
        }
}

int main()
{
    int t;
    
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}