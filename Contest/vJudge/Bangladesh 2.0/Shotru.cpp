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
    int a[t+5];
    for (int  i = 0 ; i < t ; i++)
    {
        
        cin>>a[i];
    }
    int cnt1 = 0 ;
    for (int  j = 1 ; j < t-1 ; j++)
    {
        if (  a[j] < a[j-1]  && a[j] < a[j+1] || a[j] > a[j-1] && a[j] > a[j+1])
        {
            cnt1++;
        }
    }
    

    cout<<cnt1;
    return 0;
}
