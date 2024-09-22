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
    ll intro, extro, uni;
    cin >> t;
    while (t--)
    {
        ll sum = 0;
        cin >> intro >> extro >> uni;
        if (intro == 0 && extro == 0 && uni == 0)
        {
            cout << "0";
            nl;
        }
        else if (((extro-3*(extro/3)))+uni < 3 && extro % 3 != 0)
        {
            cout << "-1";
            nl;
        }
        else
        {
            if ( (extro + uni)%3 == 0 )
            {
                cout<<intro+((extro+uni)/3);
                nl;
            }
            else
            {
                cout<<intro+((uni+extro)/3)+1;
                nl;
            }
        }
    }
    return 0;
}