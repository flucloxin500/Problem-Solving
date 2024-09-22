#include <bits/stdc++.h>

using namespace std ;
int main (){

    int m[100010],i , n , x  ;

    cin>>n;

    for ( i = 0 ; i < n ; i++)
    {
        cin>>m[i];
    }
    
   for ( i = 0 ; i < n ; i++)
    {
        if ( m[i] > 0)
        {
            cout<<"1 ";
        }
    else if ( m[i] < 0)
        {
           cout<<"2 ";
        }
    else if ( m[i] == 0)
        {
            cout<<"0 ";
        }
    }
    return 0 ;
}

