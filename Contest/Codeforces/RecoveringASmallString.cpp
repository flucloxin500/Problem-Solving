
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
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n <= 28)
        {
            for (int i = 1; i <= 26; i++)
            {
                int ascii = i + 96;
                char character = static_cast<char>(ascii);
                if (i + 2 == n)
                {
                    cout << "aa" << character;
                    nl;
                }
            }
        }
        else if (n > 28 && n <= 53)
        {
            for (int i = 1; i <= 26; i++)
            {
                int ascii = i + 96;
                char character = static_cast<char>(ascii);
                if (i + 27 == n)
                {
                    cout << "a" << character << "z";
                    nl;
                }
            }
        }
        else
        {
            for (int i = 2; i <= 26; i++)
            {
                int ascii = i + 96;
                char character = static_cast<char>(ascii);
                if (i + 52 == n)
                {
                    cout <<character << "zz";
                    nl;
                }
            }
        }
    }
    return 0;
}