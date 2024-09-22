#include <bits/stdc++.h>

using namespace std ;
int  main ()
{
    int x , y , z;

    cin>>x ;

    y = x % 2;
    z = x / 2 ;

    if ( y == 0 && z != 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}