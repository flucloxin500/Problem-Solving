/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char A, B;
        A = a[0];
        B = b[0];
        cout << B << a[1] << a[2] << " " << A << b[1] << b[2];
        cout << endl;
    }
    return 0;
}
