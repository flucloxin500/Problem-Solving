/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    int  n ;
    int cnt1 , cnt2 ;
    int sixdigit[100010];
    for ( i = 0 ; i < t ; i++)
    {
        cin>>sixdigit[i];
        n = strlen(sixdigit[i]);
        cnt1 = 0 ; 
        cnt2 = 0;
        for ( j = 0 ; j < n/2 ; j++)
        {
            cnt1 += sixdigit[j];
        }
        for ( j = n/2 ; j < n ; j++)
        {
            cnt2 += sixdigit[j];
        }
    }
    return 0;
}
