/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    int a,b,c ;

    cin>>t ;

    for ( i = 0 ;  i < t ; i++)
    {
        cin>>a>>b>>c;

        if ( a == b )
        {
            cout<<c<<endl;
        }
        else if ( c == b )
        {
            cout<<a<<endl;
        }
        else if ( c == a )
        {
            cout<<b<<endl;
        }
    }

    return 0;
    
}