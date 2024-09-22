#include <bits/stdc++.h>

using namespace std ;
int  main ()
{
    int n , i , j;
    char grid[8][8];

    cin>>n;

    while (n--)
    {
        for ( i = 0 ; i < 8 ; i++)
        {
            for ( j = 0 ; j < 8 ; j++)
            {
                cin>>grid[i][j];
                if ( grid[i][j] >='a' && grid[i][j] <='z')
                {
                    cout<<grid[i][j];
                }
            }
        }
        cout<<endl;
    }

}