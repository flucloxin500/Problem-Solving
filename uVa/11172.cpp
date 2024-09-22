#include<iostream>
#include<climits>

using namespace std ;

int main ()
{
    int x , y;
    int n ;

    cin >> n ;

    while ( n-- )
    {
        cin >> x >> y ;
        if ( x > y)
        {
            cout << ">"<<endl;
        }
        if ( x < y)
        {
            cout << "<"<<endl;
        }
        if ( x == y)
        {
            cout << "="<<endl;
        }
    }
}