/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

bool prime(long long x)
{

    if (x < 2)
        return false;
    if (x <= 3)
        return true;
    if (x % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(x); i += 2)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main()
{

    long long n;
    cin >> n;
    bool m;
    m = prime(n);

    if (m == true)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}