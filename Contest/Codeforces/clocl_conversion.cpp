
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
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        if (S[0] == '0' && S[1] == '0')
        {
            cout << "12:" << S[3] << S[4] << " AM";
            nl;
        }
        else if (S[0] == '0' && S[1] != '0')
        {
            cout << S << " AM";
            nl;
        }
        else if (S[0] == '1' && (S[1] == '0' || S[1] == '1'))
        {
            cout << S << " AM";
            nl;
        }
        else if (S[0] == '1' && (S[1] > '1' || S[1] <= '9'))
        {
            if (S[1] == '2')
            {
                cout << "12:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '3')
            {
                cout << "01:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '4')
            {
                cout << "02:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '5')
            {
                cout << "03:" << S[3] << S[4] << " PM";
                nl;
            }
            if (S[1] == '6')
            {
                cout << "04:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '7')
            {
                cout << "05:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '8')
            {
                cout << "06:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '9')
            {
                cout << "07:" << S[3] << S[4] << " PM";
                nl;
            }
        }
        else if (S[0] == '2' && (S[1] >= '0' || S[1] <= '3'))
        {
            if (S[1] == '0')
            {
                cout << "08:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '1')
            {
                cout << "09:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '2')
            {
                cout << "10:" << S[3] << S[4] << " PM";
                nl;
            }
            else if (S[1] == '3')
            {
                cout << "11:" << S[3] << S[4] << " PM";
                nl;
            }
        }
    }

    return 0;
}