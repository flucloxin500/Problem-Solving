#include<iostream>
#include<climits>

using namespace std ;
int main()
{
    int n , i , j, f;
    cin>>n;

    for(i=2; i<=n; i++)
    {

        f=0;

        for ( j = 1 ; j <= i ; j++)
        {
            if ( i % j == 0)
            {
               f++ ;
                
            }
        }

        if ( f == 2)
        {
            cout<<i<<" ";
        }
    }

    
    return 0;
}