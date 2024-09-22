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

        if(Z>Y && Y>X)
        {
            cout<<"Case "<<i<<": "<<Y<<endl;
        }
        else if(Z>X && X>Y)
        {
            cout<<"Case "<<i<<": "<<X<<endl;
        }
        else if(X>Z && Z>Y)
        {
            cout<<"Case "<<i<<": "<<Z<<endl;
        }
        else if(X>Y && Y>Z)
        {
            cout<<"Case "<<i<<": "<<Y<<endl;
        }
        else if(Y>Z && Z>X)
        {
            cout<<"Case "<<i<<": "<<Z<<endl;
        }
        else if(Y>X && X>Z)
        {
            cout<<"Case "<<i<<": "<<X<<endl;
        }

        //cout<<X<<Y<<Z;

    }
    
}