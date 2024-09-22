#include <iostream>
#include <cmath>

using namespace std ;
int  main ()
{
    int n , i ;

    cin>>n;

    int X,Y,Z;

    for( i = 1 ; i <= n ; i++)
    {
        cin>>X>>Y>>Z;

        if ( (X<=20 && Y<=20) && Z<=20 )
        {
            cout<<"Case "<<i<<": good"<<endl;
        }
        else 
        {
            cout<<"Case "<<i<<": bad"<<endl;
        }

    }
    
}