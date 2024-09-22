/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        int ans , rem , sum = 0;
        ans = n / 10 ;
        rem = n % 10 ;
        sum = ans + rem ;

        cout<<sum<<endl;
    }
    return 0;
}
