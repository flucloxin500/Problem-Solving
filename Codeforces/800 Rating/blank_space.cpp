/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i,n,x;
    cin>>t ;
    while(t--)
    {
        vector<int>V;
        cin>>n;
        int max  = 0 ;
        int cnt = 0 ;
        for ( i = 0 ;  i  < n ; i++)
        {
            cin>>x;
            V.push_back(x);
        }
        for ( i = 0 ;  i  < n ; i++)
        {
            if ( V[i] == 0)
            {
                cnt++;
                if ( cnt > max)
                {
                    max  = cnt ;
                }
            }
            else 
            {
                cnt = 0 ;
            }
        }

        cout<<max<<endl;
    }
    return 0;
}
