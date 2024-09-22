#include <iostream>
#include <cmath>

using namespace std ;

int main (){

    int A,B;
    char ch ;
    cin>>A>>ch>>B;

    if ( ch == '+' )
    {
        cout<<A+B<<endl;
    }
    else if ( ch == '-' )
    {
        cout<<A-B<<endl;
    }
    else if ( ch == '*' )
    {
        cout<<A*B<<endl;
    }
    else if ( ch == '/' )
    {
        cout<<A/B<<endl;
    }

}