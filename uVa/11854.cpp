#include<iostream>
#include<climits>

using namespace std ;

int main ()
{
    int a , b , c;

    while ( 1 )
    {
        cin >> a >> b >> c ;

        if ( a == 0 && b == 0 && c == 0)
        {
            break;
        }
        else if ( (a * a) + ( b * b )== c * c
                ||  (c * c) + ( b * b )== a * a
                ||  (c * c) + ( a * a )== b * b)
        {
            cout<<"right"<<endl;
        }
        else if ( (a * a) + ( b * b )!= c * c
                ||  (c * c) + ( b * b )!= a * a
                ||  (c * c) + ( a * a )!= b * b)
        {
            cout<<"wrong"<<endl;
        }
    }
}