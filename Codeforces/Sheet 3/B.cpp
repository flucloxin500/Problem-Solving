#include <bits/stdc++.h>

using namespace std ;
int main (){

    long long m[100010],i , n , x , pos = 0 ;

    cin>>n;

    for ( i = 0 ; i < n ; i++)
    {
        cin>>m[i];
    }

    cin>>x;

    

    for ( i = 0 ; i < n ; i++)
    {
        if ( x == m[i])

        {
            pos++;
            cout<<i<<endl;
            break; 
        }
             
    }

    if ( pos == 0)
    {
        cout<<"-1"<<endl;
    }
     
    return 0 ;
}

