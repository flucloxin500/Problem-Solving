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
    int t;
    cin >> t;
    int n[t+5];
    while(t--)
    {
        cin>>n[t];
        if(n[t] == 0)
        {
            cout<<"1";
            nl;
        }
        else 
        {
            cout<<n[t]*3;
            nl;
        }
    }
    return 0;
}
