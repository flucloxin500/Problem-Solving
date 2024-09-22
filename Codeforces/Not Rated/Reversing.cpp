
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

int main()
{
    int t;
    cin>>t;
    int a[10100] , pos , f = 0;
    for(int i = 0 ; i < t; i++)
    {
        cin>>a[i] ;
    }
    for ( int j = 0 ; j < t ; j++)
    {
        if ( a[j] == 0)
        {
            pos = j+1 ;
            f = 1 ;
            cout<<a[j+1]<<" 0 ";
            break;
        }
    }

    if ( f == 0)
    {}
    for ( int l = 0 ; l < pos-1 ; l++)
    {
        cout<<a[l]<<" ";
    }
    for ( int k = pos+1 ; k < t ; k++)
    {
        cout<<a[k]<<" ";
    }
    return 0;
}