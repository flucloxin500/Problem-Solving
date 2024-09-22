#include <bits/stdc++.h>

using namespace std ;
int  main (){

    int a,c ;
    char ch ;

    cin>>a>>ch>>c;

    if ( ch == '>' && a > c)
    {
        cout<<"Right"<<endl;
    }
    else if ( ch == '>' && a <= c)
    {
        cout<<"Wrong"<<endl;
    }
    else if ( ch == '<' && a < c)
    {
        cout<<"Right"<<endl;
    }
    else if ( ch == '<' && a >= c)
    {
        cout<<"Wrong"<<endl;
    }
    else if ( ch == '=' && a == c)
    {
        cout<<"Right"<<endl;
    }
    else if ( ch == '=' && a != c)
    {
        cout<<"Wrong"<<endl;
    }

}