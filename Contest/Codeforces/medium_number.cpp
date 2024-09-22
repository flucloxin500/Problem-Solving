/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i,a,b,c;
    cin>>t ;

    for ( i = 0 ; i < t ; i++)
    {
        cin>>a>>b>>c;
        if ( a > b  && c > a )
        {
            cout<<a<<endl;
        }
        else if ( a > c && c > b )
        {
            cout<<c<<endl;
        }
        else if ( a >  b && b > c )
        {
            cout<<b<<endl;
        }
        else if ( c > b && b > a)
        {
            cout<<b<<endl;
        }
        else if ( b > c && c > a )
        {
            cout<<c<<endl;
        }
        else if ( c > a && a > b )
        {
            cout<<a<<endl;
        }
        else if ( b > a && a > c)
        {
            cout<<a<<endl;
        }
        else if ( a > b && c > b )
        {
            cout<<c<<endl;
        }
        else if ( a > b && b > c )
        {
            cout<<b<<endl;
        }
    }
    return 0;
}
