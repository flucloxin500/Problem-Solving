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
    int a , b ;
    cin >> a >> b ;
    
        if ( a == 1 && b == 2 || a == 2 && b == 1)
        {
            cout<<"3";
        }
        else if ( a == 2 && b == 3 || a == 3 && b == 2 )
        {
            cout<<"1";
        }
        else if ( a == 3 && b == 1 || a == 1  && b == 3 )
        {
            cout<<"2";
        }
}
