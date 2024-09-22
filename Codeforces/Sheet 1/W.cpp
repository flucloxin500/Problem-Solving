#include <bits/stdc++.h>

using namespace std ;
int  main (){

    int a,b,c , sum , div , mul ;
    char x,y ;
    
    cin>>a>>x>>b>>y>>c;

    sum = a + b ;
    div = a - b ;
    mul = a * b ;

    if ( x == '+' )
    {
        if ( c == sum)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
    else if ( x == '-' )
    {
        if ( c == div)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<div<<endl;
        }
    }
    else if ( x == '*' )
    {
        if ( c == mul)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<mul<<endl;
        }
    }
    
}