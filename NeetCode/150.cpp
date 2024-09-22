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
    int n[t + 5];
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }

    int exists[10000] = {0}; // assuming max value in nums is less than 10000

    bool duplicate_found = false;
    for (int i = 0; i < t; i++)
    {
        if (exists[n[i]] == 1)
        {
            cout << "Duplicate found\n";
            duplicate_found = true;
            break;
        }
        exists[n[i]] = 1;
    }

    if (!duplicate_found)
    {
        cout << "No duplicates found\n";
    }

    return 0;
}