#include <bits/stdc++.h>

using namespace std ;
int  main ()
{

    int petya,vasya,tanya , n , cnt = 0;

    cin>>n;

    int i ;

    for ( i = 0 ; i < n ; i++)
    {
        cin>>petya>>vasya>>tanya ;

        if ( petya == 0 && (vasya == 1 && tanya == 1) 
        || vasya == 0 && (petya == 1 && tanya == 1) 
        || tanya == 0 && (petya == 1 && vasya == 1)
        || ((petya == 1) && (vasya == 1) && (tanya == 1)))
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;

}