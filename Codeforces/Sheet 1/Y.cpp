#include <bits/stdc++.h>

using namespace std ;
int  main (){

    long long a,b,c,d,rem,sum;
    cin>>a>>b>>c>>d;

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    
    sum = a*b*c*d ;

    rem = sum % 100 ;

    if ( rem < 9)
    {
        cout<<"0"<<rem<<endl;
    }

    else
    {
        cout<<rem<<endl;
    }

}