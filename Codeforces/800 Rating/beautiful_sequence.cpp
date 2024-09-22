/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin >> t;
    int A[100010];
    int f ;
    while(t--)
    {
        cin>>n;
        f = 0 ;
        for (i = 1; i <= n; i++)
        {
            cin >> A[i];
            if (i == A[i])
            {
                f=1;
            }
            else if (A[i] < i)
            {
                f=1;
            }
            // else if ( i != A[i])
            // {
            //     f=0;
            // }
            
        }
        if ( f == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}
