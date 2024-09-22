#include <bits/stdc++.h>

using namespace std ;

int main ()
{
    string str ;

    int i = 0 ;

    while ( 1 )
    {
        ++i ;
        cin >> str;
        if ( str[0] == '*')
        {
            break;
        }
        else
        {

            if ( str.length() == 4)
            {
                cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
            }
        }

    }
}

