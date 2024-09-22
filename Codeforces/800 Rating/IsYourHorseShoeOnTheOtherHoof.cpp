
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
    ll S[10];
    int l, sum = 0;

    for ( l = 0 ; l < 4 ; l++)
    {
        cin>>S[l];
    }

    for (int i = 0; i < 4; i++)
    {
        for(int j = i+1 ; j < 4 ; j++)
        {
            if ( S[i] == S[j])
            {
                sum++;
            }
        }
    }
    if ( sum == 6)
    {
        cout<<sum/2;
        nl;
    }
    else if ( sum == 3)
    {
        cout<<sum-1;
        nl;
    }
    else 
    {
        cout<<sum;
        nl;
    }
    return 0;
}